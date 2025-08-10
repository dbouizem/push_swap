/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:08:37 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/10 18:09:25 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Erroe
void	free_stack(t_node **stack)
{
	t_node	*tmp;
	t_node	*next;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*stack = NULL;
}

void	free_str_array(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	error_exit(t_node **stack, char **tokens, int is_split)
{
	if (stack)
		free_stack(stack);
	if (is_split && tokens)
		free_str_array(tokens);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}


