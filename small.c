/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:02:40 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/19 22:17:40 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *a)
{
	int		first;
	int		second;
	int		third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sort_small(t_stack *a, t_stack *b)
{
	assign_index(a);
	if (a->size == 2 && a->top->value > a->top->next->value)
	{
		sa(a);
		return ;
	}
	else if (a->size == 3)
	{
		sort_three(a);
		return ;
	}
	while (a->size > 3)
	{
		while (a->top->index != 0)
			(ra(a), assign_index(a));
		pb(a, b);
	}
	sort_three(a);
	if (b->size > 1 && b->top->value < b->top->next->value)
		(sb(b), assign_index(b));
	while (b->size > 0)
		pa(a, b);
}
