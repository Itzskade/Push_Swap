/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:02:08 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/19 22:03:44 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bits;
	int	size;
	int	i;
	int	j;

	size = a->size;
	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	assign_index(a);
	i = 0;
	while (i < bits)
	{
		j = size;
		while (j--)
		{
			if ((a->top->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->size)
			pa(a, b);
		i++;
	}
}
