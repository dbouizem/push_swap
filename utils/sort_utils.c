/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 22:48:13 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/11 01:05:57 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// sort_tow
int	is_sorted(t_node *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

// sort_four_five

/* Trouve la position du plus petit élément */
int	find_min_position(t_node *stack)
{
	int		min_pos;
	int		current_pos;
	int		min_val;
	t_node	*current;

	min_pos = 0;
	current_pos = 0;
	min_val = stack->value;
	current = stack->next;
	while (current)
	{
		if (current->value < min_val)
		{
			min_val = current->value;
			min_pos = current_pos + 1;
		}
		current = current->next;
		current_pos++;
	}
	return (min_pos);
}

/* Amène l'élément à la position donnée au sommet */
void	rotate_to_top(t_node **stack, int position)
{
	int	size;
	int	i;

	size = stack_size(*stack);
	if (position <= size / 2)
	{
		i = 0;
		while (i < position)
		{
			ra(stack);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < size - position)
		{
			rra(stack);
			i++;
		}
	}
}

void	push_min_to_b(t_node **a, t_node **b)
{
	int	min_pos;

	min_pos = find_min_position(*a);
	rotate_to_top(a, min_pos);
	pb(a, b);
}
