/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:31:53 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 02:42:11 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/pushswap.h"

void	ss(t_all *all)
{
	sa(all, 0);
	sb(all, 0);
	write(1, "ss\n", 3);
}
