/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:13 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 22:02:36 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/pushswap.h"

void	pa(t_all *all)
{
	push(all->stack_b, all->stack_a);
}
