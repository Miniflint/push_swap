/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 02:37:47 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 02:55:49 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pushswap.h"

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
	return (0);
}