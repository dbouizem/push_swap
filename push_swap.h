/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 04:01:41 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/11 01:04:29 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;



// Parsing
t_node	*parse_args(int ac, char **av);
void	free_stack(t_node **stack);
void	error_exit(t_node **stack, char **token, int is_split);
int		is_valid_number(char *str);
int		has_duplicate(t_node *stack, int num);

// Stack  utils
t_node	*stack_new(int value);
void	stack_add_back(t_node **stack, t_node *new);
//void	print_stack(t_node *stack);
int		stack_size(t_node *s);
t_node	*stack_last(t_node *s);
t_node	*stack_before_last(t_node *s);

// Utila
long	ft_atol(const char *nptr, int *error);
void	free_str_array(char **arr);

// Operations utils
void	swap(t_node **s, int print);
void	push(t_node **dst, t_node **src, int print);
void	rotate(t_node **s, int print);
void	rev_rotate(t_node **s, int print);

// Operations
// Swap operations
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

// Push operations
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

// Rotate operations
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

// Reverse rotate operations
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

// ======= Sort ========

void	sort_stack(t_node **a, t_node **b);

// utils
int		is_sorted(t_node *a);

int		find_min_position(t_node *stack);
void	rotate_to_top(t_node **stack, int position);
void	push_min_to_b(t_node **a, t_node **b);


#endif
