/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:41:14 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 03:15:17 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
