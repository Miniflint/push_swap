/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 02:37:47 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 23:55:39 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pushswap.h"

int	check_order2(t_all *all)
{
	int	i;

	i = 0;
	while (i < all->stack_a->current_size - 1)
	{
		i++;
		if (all->stack_a->nb[i - 1] > all->stack_a->nb[i])
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_all	all;

	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		__init__all(&all, bloc_count(argv[1], ' '));
		ft_atoi_array(argv[1], &all);
	}
	else
	{
		__init__all(&all, argc - 1);
		create_array(argv, &all);
	}
	check_double(&all);
	read_all(&all, STDIN_FILENO);
	if (check_order2(&all))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free_all(&all);
	return (0);
}
