/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __init__.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 08:16:06 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 02:53:47 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pushswap.h"

static void	__init__stack(t_all *all)
{
	all->stack_a->nb = malloc(sizeof(int) * (all->max_size + 1));
	all->stack_b->nb = malloc(sizeof(int) * (all->max_size + 1));
	if (!all->stack_a->nb)
		handle_error("Error malloc", all);
	if (!all->stack_b)
		handle_error("Error malloc", all);
	all->stack_b->current_size = 0;
	all->stack_a->current_size = all->max_size;
}

void	__init__all(t_all *all, int size)
{
	all->stack_a = (t_stack *)malloc(sizeof(t_stack));
	all->stack_b = (t_stack *)malloc(sizeof(t_stack));
	if (!all->stack_a)
		handle_error("Error malloc", all);
	if (!all->stack_b)
		handle_error("Error malloc", all);
	all->max_size = size;
	__init__stack(all);
}
