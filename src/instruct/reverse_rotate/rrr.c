/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:09 by tgoel             #+#    #+#             */
/*   Updated: 2022/07/15 08:22:39 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../HEADER/pushswap.h"

void	rrr(t_all *all)
{
	rra(all, 0);
	rrb(all, 0);
	write(1, "rrr\n", 4);
}
