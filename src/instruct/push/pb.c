/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:16 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/01 20:48:19 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void    pb(t_all *all)
{
    push(all->stack_a, all->stack_b);
	ft_printf("pb\n");
}