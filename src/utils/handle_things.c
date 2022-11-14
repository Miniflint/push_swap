/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_things.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 06:25:54 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 01:00:12 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

static void	free_stck(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->current_size)
	{
		while (i < stack->current_size)
		{
			stack->nb[i] = 0;
			i++;
		}
	}
	if (stack->nb)
		free(stack->nb);
}

void	free_all(t_all *all)
{
	if (all->stack_a)
		free_stck(all->stack_a);
	if (all->stack_b)
		free_stck(all->stack_b);
	free(all->stack_a);
	free(all->stack_b);
}

void	success_n(t_all *all)
{
	free_all(all);
	exit(EXIT_SUCCESS);
}

void	handle_error(char *str, t_all *all)
{
	write(2, str, ft_strlen(str));
	write(2, "\n", 1);
	free_all(all);
	exit(EXIT_FAILURE);
}
