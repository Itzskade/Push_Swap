/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:50:39 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/19 16:49:21 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *s, int *error)
{
	long	r;
	int		sign;
	int		i;

	sign = 1;
	r = 0;
	i = 0;
	*error = 0;
	while (ft_is_space(*s))
		s++;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign = -1;
	while (ft_is_digit(s[i]) && r >= (long)INT_MIN && r <= (long)INT_MAX)
		r = r * 10 + (s[i++] - '0');
	if (s[i] != '\0' || i == 0 || r <= (long)INT_MIN || r >= (long)INT_MAX)
		return ((*error = 1), 0);
	return (r * sign);
}
