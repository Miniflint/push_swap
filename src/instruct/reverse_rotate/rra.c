/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:05 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/01 21:14:50 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void	rra(t_all *all, int rrr)
{
	int	tmp;
	int	i;

	if (!all->stack_a->current_size)
		return ;
	i = all->stack_a->current_size - 1;
	tmp = all->stack_a->nb[all->stack_a->current_size - 1];
	while (i > 0)
	{
		all->stack_a->nb[i] = all->stack_a->nb[i - 1];
		i--;
	}
	all->stack_a->nb[0] = tmp;
	if (rrr)
		ft_printf("rra\n");
}