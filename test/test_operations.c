// # Test swap
// ./push_swap "2 1" | grep -ax "sa" && echo "OK" || echo "FAIL"

// # Test push
// ./push_swap "1" "pb" | grep -ax "pb" && echo "OK" || echo "FAIL"

// # Test rotate
// ./push_swap "2 1 3" "ra" | grep -ax "ra" && echo "OK" || echo "FAIL"

// # Test reverse rotate
// ./push_swap "3 1 2" "rra" | grep -ax "rra" && echo "OK" || echo "FAIL"


// // Print
// static void	print_stack(const char *name, t_node *s)
// {
// 	write(1, name, 2);
// 	write(1, ": ", 2);
// 	while (s)
// 	{
// 		dprintf(1, "%d ", s->value);
// 		s = s->next;
// 	}
// 	write(1, "\n", 1);
// }

// Main
// int	main(int ac, char **av)
// {
// 	t_node	*a;
// 	t_node	*b;

// 	a = NULL;
// 	b = NULL;
// 	if (ac < 2)
// 		return (0);
// 	a = parse_args(ac, av);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	sa(&a);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	pb(&a, &b);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	ra(&a);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	rra(&a);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	rr(&a, &b);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	rrr(&a, &b);
// 	print_stack("a", a);
// 	print_stack("b", b);

// 	write(1, "\n", 1);

// 	free_stack(&a);
// 	free_stack(&b);
// 	return (0);
// }
