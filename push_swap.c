/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 04:17:21 by dbouizem          #+#    #+#             */
/*   Updated: 2025/08/10 20:12:54 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;

	if (ac < 2)
		return (0);
	a = parse_args(ac, av);
	if (!a)
		return (1);
	free_stack(&a);
	return (0);
}

