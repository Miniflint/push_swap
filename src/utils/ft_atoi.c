/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:07:34 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 01:05:17 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/pushswap.h"

int	ft_atoi(char *str, t_all *all)
{
	int				x;
	long long int	res;
	int				sign;

	x = 0;
	res = 0;
	sign = 1;
	if ((str[x] == '-') || (str[x] == '+'))
	{
		if (str[x] == '-')
			sign = -1;
		if (!str[x + 1] || (str[x + 1] < '0' && str[x + 1] > '9'))
			handle_error("Error", all);
		x++;
	}
	while (str[x])
	{
		if (!ft_isdigit(str[x]))
			handle_error("Error", all);
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	if (res * sign > INT_MAX || res * sign < INT_MIN)
		handle_error("Error", all);
	return (res * sign);
}
