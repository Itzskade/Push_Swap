/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:01:44 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/19 16:50:17 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	has_duplicate(t_stack *a, int n)
{
	t_node	*tmp;

	tmp = a->top;
	while (tmp)
	{
		if (tmp->value == n)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

static int	fill_stack(t_stack *a, int ac, char **av)
{
	int		i;
	long	n;
	int		error;
	t_node	*node;
	t_node	*last;

	i = 0;
	while (i < ac)
	{
		n = ft_atol(av[i++], &error);
		if (error || has_duplicate(a, n))
			return (1);
		node = malloc(sizeof(t_node));
		if (!node)
			return (1);
		node->value = (int)n;
		node->next = NULL;
		if (!a->top)
			a->top = node;
		else
			last->next = node;
		last = node;
		a->size++;
	}
	return (0);
}

int	parse_args(t_stack *a, int ac, char **av)
{
	char	**split;
	int		i;

	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		split = ft_split(av[1]);
		i = 0;
		while (split[i])
			i++;
		if (i == 0 || fill_stack(a, i, split))
		{
			free_split(split);
			return (write(2, "Error\n", 6), 1);
		}
		free_split(split);
	}
	else
	{
		if (fill_stack(a, ac - 1, av + 1))
			return (write(2, "Error\n", 6), 1);
	}
	return (0);
}
