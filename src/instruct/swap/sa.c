/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:11:31 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/01 21:14:54 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void	sa(t_all *all, int ss)
{
	int	tmp;

	tmp = all->stack_a->nb[1];
	all->stack_a->nb[1] = all->stack_a->nb[0];
	all->stack_a->nb[0] = tmp;
	if (ss)
		ft_printf("sa\n");
}