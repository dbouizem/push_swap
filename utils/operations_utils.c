/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:50:40 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/10 18:44:50 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node **s, int print)
{
	t_node	*a;
	t_node	*b;

	if (!s || !*s || !(*s)->next)
		return ;
	a = *s;
	b = a->next;
	a->next = b->next;
	b->next = a;
	*s = b;
	if (print)
		write(1, "sa/sb?\n", 7);
}

void	push(t_node **dst, t_node **src, int print)
{
	t_node	*n;

	if (!src || !*src)
		return ;
	n = *src;
	*src = (*src)->next;
	n->next = *dst;
	*dst = n;
	if (print)
		write(1, "pa/pb?\n", 7);
}

void	rotate(t_node **s, int print)
{
	t_node	*first;
	t_node	*last;

	if (!s || !*s || !(*s)->next)
		return ;
	first = *s;
	*s = first->next;
	first->next = NULL;
	last = stack_last(*s);
	last->next = first;
	if (print)
		write(1, "ra/rb?\n", 7);
}

void	rev_rotate(t_node **s, int print)
{
	t_node	*bl;
	t_node	*last;

	if (!s || !*s || !(*s)->next)
		return ;
	bl = stack_before_last(*s);
	last = bl->next;
	bl->next = NULL;
	last->next = *s;
	*s = last;
	if (print)
		write(1, "rra/rrb?\n", 9);
}

void	rrr(t_node **a, t_node **b)
{
	rev_rotate(a, 0);
	rev_rotate(b, 0);
	write(1, "rrr\n", 4);
}
