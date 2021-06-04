/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:03:25 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:14:30 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_parse_1(char **av)
{
	int	i;

	i = 0;
	while (av[1][i])
	{
		if (!(ft_isdigit(av[1][i])) && av[1][i] != '-')
			ft_error();
		if (av[1][i] == '-')
			i++;
		if (!(ft_isdigit(av[1][i])))
			ft_error();
		while (ft_isdigit(av[1][i]))
			i++;
		if (av[1][i] && av[1][i] != ' ')
			ft_error();
		if (av[1][i])
			i++;
	}
	if (av[1][i - 1] == ' ')
		ft_error();
}

void	ft_parse_2(int ac, char **av)
{
	int	i;
	int	i2;

	i = 0;
	(void)ac;
	while (av[++i])
	{
		i2 = 0;
		while (av[i][i2])
		{
			if (!(ft_isdigit(av[i][i2])) && av[i][i2] != '-')
				ft_error();
			if (av[i][i2] == '-')
				i2++;
			if (!(ft_isdigit(av[i][i2])))
				ft_error();
			while (ft_isdigit(av[i][i2]))
				i2++;
			if (av[i][i2] && av[i][i2] != ' ')
				ft_error();
			if (av[i][i2])
				i2++;
		}
	}
}

void	ft_parsing(int ac, char **av)
{
	if (ac == 2)
		ft_parse_1(av);
	else
		ft_parse_2(ac, av);
}
