/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:24:43 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/11 20:39:41 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_fill_lst_v1(t_list_int **a, char *av)
{
	ft_lstadd_front_int(a, ft_atoi(av));
	av = ft_strchr(av, ' ');
	av++;
	while (av)
	{
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
	ft_lstadd_front_int(a, ft_atoi(av[1]));
	while (++i < ac)
		ft_lstadd_back_int(a, ft_atoi(av[i]));
}
