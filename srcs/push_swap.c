/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:05:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/11 20:26:20 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	push_swap(int ac, char **av)
{
	t_list_int	*a;

	if (ac == 2)
		ft_fill_lst_v1(&a, av[1]);
	else
		ft_fill_lst_v2(&a, av, ac);
	ft_lstaff_int(a);
	//a = sa(a);
	//ft_lstaff_int(a);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	push_swap(ac, av);
}
