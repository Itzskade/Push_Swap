/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:02:55 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/15 18:53:16 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_space(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	stack->size = 0;
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	assign_index(t_stack *a)
{
	t_node	*current;
	t_node	*cmp;
	int		i;

	current = a->top;
	while (current)
	{
		i = 0;
		cmp = a->top;
		while (cmp)
		{
			if (cmp->value < current->value)
				i++;
			cmp = cmp->next;
		}
		current->index = i;
		current = current->next;
	}
}
