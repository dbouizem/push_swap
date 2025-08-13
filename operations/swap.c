/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 23:13:50 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 03:15:23 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **a)
{
	swap(a, 0);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b, 0);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap(a, 0);
	swap(b, 0);
	write(1, "ss\n", 3);
}

