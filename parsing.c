/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:17:19 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/07 21:04:52 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(char *str)
{
	if (!*str)
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	has_duplicate(t_node *stack, int num)
{
	while (stack)
	{
		if (stack->value == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

static void	process_token(char *token, t_node **a, char **tokens, int ac)
{
	long	num;
	int		error;

	if (!is_valid_number(token))
		error_exit(a, tokens, (ac == 2));
	error = 0;
	num = ft_atol(token, &error);
	if (error || num < INT_MIN || num > INT_MAX)
		error_exit(a, tokens, (ac == 2));
	if (has_duplicate(*a, (int)num))
		error_exit(a, tokens, (ac == 2));
	stack_add_back(a, stack_new((int)num));
}

t_node	*parse_args(int ac, char **av)
{
	t_node	*a;
	char	**tokens;
	int		i;

	a = NULL;
	tokens = NULL;
	if (ac == 2)
		tokens = ft_split(av[1], ' ');
	else if (ac > 2)
		tokens = &av[1];
	if (!tokens)
		error_exit(&a, NULL, 0);
	i = 0;
	while (tokens[i])
	{
		process_token(tokens[i], &a, tokens, ac);
		i++;
	}
	if (ac == 2)
		free_str_array(tokens);
	return (a);
}
