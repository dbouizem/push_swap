// # Test 1: Format chaîne
// valgrind ./push_swap "4 -2 1"

// # Test 2: Format arguments multiples
// valgrind ./push_swap 4 -2 1

// # Test 3: Erreurs
// ./push_swap "4 2 a"
// ./push_swap "2147483648"
// ./push_swap "4 2 4"

// # Test 4: Aucun argument
// ./push_swap

// # Test 5: Pile vide
// ./push_swap ""

// Cas Valides:
// ./push_swap ""
// ./push_swap "10"
// ./push_swap "5 -3 0 1 -42"
// ./push_swap "-2147483648"
// ./push_swap "2147483647"


// Cas d'Erreurs:
// ./push_swap "1 2 1"
// ./push_swap "2147483648"
// ./push_swap "-2147483649"
// ./push_swap "1 a 2"
// ./push_swap "1 - 2"
// ./push_swap "1 ++2 3"
// ./push_swap "\"\""

// Print
// void	print_stack(t_node *stack)
// {
// 	while (stack)
// 	{
// 		printf("%d\n", stack->value);
// 		stack = stack->next;
// 	}
// }

// Main
// int	main(int ac, char **av)
// {
// 	t_node	*a;

// 	if (ac < 2)
// 		return (0);
// 	a = parse_args(ac, av);
// 	if (!a)
// 		return (1);
// 	// print_stack(a);
// 	free_stack(&a);
// 	return (0);
// }
