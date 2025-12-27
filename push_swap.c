/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:01:56 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/15 18:12:02 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->top;
	while (tmp && tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		else
			tmp = tmp->next;
	}
	return (1);
}

static void	run_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	if (a->size <= 5)
		sort_small(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	if (parse_args(&a, ac, av))
		return (free_stack(&a), 1);
	run_sort(&a, &b);
	free_stack(&a);
	return (0);
}
