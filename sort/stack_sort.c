/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 03:17:58 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 05:52:59 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	(void)b;
	if (is_sorted(*a))
		return ;
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size <= 5)
		sort_four_five(a, b);
	else if (size <= 100)
		sort_chunks(a, b);
	// else
	// 	radix_sort(a, b);

}
