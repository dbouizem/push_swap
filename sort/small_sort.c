/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:53:22 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/13 03:46:58 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_node **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !*a || !(*a)->next || !(*a)->next->next)
		return ;
	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && first > third && second < third)
		ra(a);
	else if (first < second && first < third && second > third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && first > third)
		rra(a);
}

void	sort_four_five(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size <= 3)
	{
		sort_three(a);
		return ;
	}
	if (size == 4)
	{
		push_min_to_b(a, b);
		sort_three(a);
		pa(a, b);
	}
	else
	{
		push_min_to_b(a, b);
		push_min_to_b(a, b);
		sort_three(a);
		pa(a, b);
		pa(a, b);
	}
}


