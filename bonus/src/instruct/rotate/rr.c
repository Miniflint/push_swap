/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:32:00 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 02:41:57 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/pushswap.h"

void	rr(t_all *all)
{
	ra(all, 0);
	rb(all, 0);
	write(1, "rr\n", 3);
}
