/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 03:06:01 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 08:37:48 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	compress_indices(t_node *a)
{
	t_node	*cur;
	t_node	*cmp;
	int		rank;

	cur = a;
	while (cur)
	{
		rank = 0;
		cmp = a;
		while (cmp)
		{
			if (cmp->value < cur->value)
				rank++;
			cmp = cmp->next;
		}
		cur->index = rank;
		cur = cur->next;
	}
}

static void	push_chunk(t_node **a, t_node **b, int i, int ck_size, int size)
{
	int	ck_low;
	int	ck_high;

	ck_low = i * ck_size;
	ck_high = ck_low + ck_size - 1;
	if (ck_high >= size)
		ck_high = size - 1;
	push_chunk_a_to_b(a, b, ck_low, ck_high);
}

static int	calculate_chunk_count(int size)
{
	if (size <= 60)
		return (4);
	else if (size <= 100)
		return (5);
	else if (size <= 200)
		return (6);
	else if (size <= 300)
		return (7);
	else
		return (8);
}

void	sort_chunks(t_node **a, t_node **b)
{
	int	size;
	int	num_ck;
	int	ck_size;
	int	ck_index;

	size = stack_size(*a);
	if (size <= 5)
		return ;
	compress_indices(*a);
	num_ck = calculate_chunk_count(size);
	ck_size = (size + num_ck - 1) / num_ck;
	ck_index = 0;
	while (ck_index < num_ck)
	{
		push_chunk(a, b, ck_index, ck_size, size);
		ck_index++;
	}
	drain_b_to_a(a, b);
}


