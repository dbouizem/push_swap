/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 02:55:16 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 03:15:13 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	rrr(t_node **a, t_node **b)
{
	rev_rotate(a, 0);
	rev_rotate(b, 0);
	write(1, "rrr\n", 4);
}
