/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:23:34 by tgoel             #+#    #+#             */
/*   Updated: 2022/11/14 22:04:46 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "get_next_line/get_next_line.h"
# include "pushstruct.h"

/* Sorting */

	/* Sorting utils */

/* Errors handling */
void	free_all(t_all *all);
void	handle_error(char *str, t_all *all);
void	success_n(t_all *all);

/* init */
void	__init__all(t_all *all, int size);

/* checking */
void	check_double(t_all *all);
int		check_order(t_all *all);

/* utils */
int		ft_strlen(char *str);
int		read_all(t_all *all, int fd);
int		ft_isdigit(char c);
int		ft_atoi(char *str, t_all *all);
void	ft_atoi_array(char *str, t_all *all);
void	create_array(char **argv, t_all *all);
void	print_stacks(t_all *all);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
int		bloc_count(const char *s, char c);
int		ft_strcmp(char *s1, char *s2);

/* basics instructions */
	/* swap */
void	sa(t_all *all, int ss);
void	sb(t_all *all, int ss);
void	ss(t_all *all);
	/* rotate */
void	ra(t_all *all, int rr);
void	rb(t_all *all, int rr);
void	rr(t_all *all);
	/* reverse rotate */
void	rra(t_all *all, int rrr);
void	rrb(t_all *all, int rrr);
void	rrr(t_all *all);
	/* push */
void	pa(t_all *all);
void	pb(t_all *all);
		/* utils push */
void	push(t_stack *a, t_stack *b);

#endif