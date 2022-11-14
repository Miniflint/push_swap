/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:56:01 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 01:07:13 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

// 1 3 2 - plus grand -> plus petit

void	three_numbers(t_all *all)
{
	if (all->stack_a->nb[0] > all->stack_a->nb[1]
		&& all->stack_a->nb[0] > all->stack_a->nb[2])
		ra(all, 1);
	else if (all->stack_a->nb[1] > all->stack_a->nb[0]
		&& all->stack_a->nb[1] > all->stack_a->nb[2])
		rra(all, 1);
	if (all->stack_a->nb[0] > all->stack_a->nb[1])
		sa(all, 1);
}

int	min_ind(t_all *all)
{
	int	i;
	int	min_size;
	int	ret;

	i = 0;
	ret = 0;
	min_size = all->stack_a->nb[0];
	while (i < all->stack_a->current_size - 1)
	{
		if (all->stack_a->nb[++i] < min_size)
		{
			min_size = all->stack_a->nb[i];
			ret = i;
		}
	}
	return (ret);
}

// void	two_push(t_all *all)
// {
// 	int	i;
// 	int	min_i;

// 	while (all->stack_a->current_size - 3)
// 	{
// 		i = 0;
// 		min_i = min_ind(all);
// 		if (min_i == -1)
// 			handle_error("Error", all);
// 		if (min_i == 1)
// 			sa(all, 1);
// 		else if (min_i > all->stack_a->current_size / 2)
// 		{
// 			while (i++ < all->stack_a->current_size - min_i)
// 				rra(all, 1);
// 		}
// 		else
// 			while (i++ < min_i)
// 				ra(all, 1);
// 		pb(all);
// 	}
// }

void	push_min(t_all *all)
{
	int	min;
	int	i;

	min = get_min(all->stack_a);
	i = 0;
	while (1)
	{
		if (all->stack_a->nb[0] == min)
		{
			pb(all);
			return ;
		}
		ra(all, 1);
		i++;
	}
}

void	sort_to_five(t_all *all, int nb)
{
	push_min(all);
	if (nb == 5)
		push_min(all);
	three_numbers(all);
	pa(all);
	pa(all);
}
