

#include "../push_swap.h"

int	pos_first_in_range(t_node *a, int low, int high)
{
	int		pos;
	t_node	*cur;

	pos = 0;
	cur = a;
	while (cur)
	{
		if (cur->index >= low && cur->index <= high)
			return (pos);
		pos++;
		cur = cur->next;
	}
	return (-1);
}

void	bring_to_top_a(t_node **a, int pos)
{
	int		size;
	int		rotations;

	size = stack_size(*a);
	if (pos <= size / 2)
	{
		rotations = pos;
		while (rotations--)
			ra(a);
	}
	else
	{
		rotations = size - pos;
		while (rotations--)
			rra(a);
	}
}

int	find_max_position(t_node *stack)
{
	int		cur_pos;
	int		max_pos;
	int		max_idx;
	t_node	*cur;

	cur_pos = 0;
	max_pos = 0;
	max_idx = stack->index;
	cur = stack;
	while (cur)
	{
		if (cur->index > max_idx)
		{
			max_idx = cur->index;
			max_pos = cur_pos;
		}
		cur_pos++;
		cur = cur->next;
	}
	return (max_pos);
}

void	push_chunk_a_to_b(t_node **a, t_node **b, int low, int high)
{
	int	mid;
	int	pos;

	mid = (low + high) / 2;
	pos = pos_first_in_range(*a, low, high);
	while (pos != -1)
	{
		bring_to_top_a(a, pos);
		pb(a, b);
		if (*b != NULL && (*b)->value <= mid)
			rb(b);
		pos = pos_first_in_range(*a, low, high);
	}
}

void	drain_b_to_a(t_node **a, t_node **b)
{
	int		pos;
	int		size;
	int		rotations;

	size = stack_size(*b);
	while (size)
	{
		pos = find_max_position(*b);
		if (pos <= size / 2)
		{
			rotations = pos;
			while (rotations--)
				rb(b);
		}
		else
		{
			rotations = size - pos;
			while (rotations--)
				rrb(b);
		}
		pa(a, b);
		size--;
	}
}
