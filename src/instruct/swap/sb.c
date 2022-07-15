/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:49 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 09:43:45 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../headers/pushswap.h"

void	sb(t_all *all, int ss)
{
	int	tmp;

	tmp = all->stack_b->nb[1];
	all->stack_b->nb[1] = all->stack_b->nb[0];
	all->stack_b->nb[0] = tmp;
	if (ss)
		write(1, "sb\n", 3);
}
