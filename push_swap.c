/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 04:17:21 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/10 23:07:47 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	a = parse_args(ac, av);
	if (!a)
		return (1);

	sort_stack(&a, &b);

	free_stack(&a);
	free_stack(&b);
	return (0);
}

