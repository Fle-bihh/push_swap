/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:24:43 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 14:17:05 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(0);
}

void	ft_fill_lst_v1(t_list_int **a, char *av)
{
	int	i;

	if (ft_atol(av) > INT_MAX || ft_atol(av) < INT_MIN)
		ft_error();
	ft_lstadd_front_int(a, ft_atoi(av));
	av = ft_strchr(av, ' ');
	if (av)
		av++;
	i = 1;
	while (av)
	{
		if (ft_atol(av) > INT_MAX || ft_atol(av) < INT_MIN)
			ft_error();
		ft_lstadd_back_int(a, ft_atoi(av));
		av = ft_strchr(av, ' ');
		if (av)
			av++;
	}
}

void	ft_fill_lst_v2(t_list_int **a, char **av, int ac)
{
	int	i;

	i = 1;
	if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
		ft_error();
	ft_lstadd_front_int(a, ft_atoi(av[1]));
	while (++i < ac)
	{
		if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
			ft_error();
		ft_lstadd_back_int(a, ft_atoi(av[i]));
	}
}

void	ft_fill_lst(t_list_int **a, char **av, int ac)
{
	if (ac > 2)
		ft_fill_lst_v2(a, av, ac);
	else
		ft_fill_lst_v1(a, av[1]);
}
