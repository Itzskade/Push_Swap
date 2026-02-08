/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 18:02:15 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/12/15 18:52:16 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}			t_stack;

/* swap.c */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
/* push.c */
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
/* rotate.c */
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
/* reverse_rotate.c */
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
/* small.c */
void	sort_small(t_stack *a, t_stack *b);
/* radix.c */
void	radix_sort(t_stack *a, t_stack *b);
/* utils.c */
int		ft_is_space(int c);
int		ft_is_digit(int c);
void	free_stack(t_stack *stack);
void	free_split(char **split);
void	assign_index(t_stack *a);
/* ft_atol.c */
long	ft_atol(const char *s, int *error);
/* ft_split.c */
char	**ft_split(char *s);
/* parse.c */
int		parse_args(t_stack *a, int ac, char **av);
/* push_swap.c */
int		main(int ac, char **av);

#endif
