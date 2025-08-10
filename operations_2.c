/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:41:14 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/10 18:43:25 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	rotate(a, 0);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b, 0);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a, 0);
	rotate(b, 0);
	write(1, "rr\n", 3);
}

void	rra(t_node **a)
{
	rev_rotate(a, 0);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	rev_rotate(b, 0);
	write(1, "rrb\n", 4);
}

