/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:29:16 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 23:14:23 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pushswap.h"

void	big_if(char *str, t_all *all)
{
	if (!ft_strcmp(str, "pa\n"))
		pa(all);
	else if (!ft_strcmp(str, "pb\n"))
		pb(all);
	else if (!ft_strcmp(str, "ra\n"))
		ra(all, 0);
	else if (!ft_strcmp(str, "rb\n"))
		rb(all, 0);
	else if (!ft_strcmp(str, "rr\n"))
		rr(all);
	else if (!ft_strcmp(str, "rra\n"))
		rra(all, 0);
	else if (!ft_strcmp(str, "rrb\n"))
		rrb(all, 0);
	else if (!ft_strcmp(str, "rrr\n"))
		rrr(all);
	else if (!ft_strcmp(str, "sa\n"))
		sa(all, 0);
	else if (!ft_strcmp(str, "sb\n"))
		sb(all, 0);
	else if (!ft_strcmp(str, "ss\n"))
		ss(all);
}

int	read_all(t_all *all, int fd)
{
	char	*tmp;

	tmp = get_next_line(fd);
	big_if(tmp, all);
	free(tmp);
	while (tmp)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break ;
		big_if(tmp, all);
		free(tmp);
	}
	return (0);
}
