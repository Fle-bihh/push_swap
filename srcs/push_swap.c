/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:05:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/12 14:11:09 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_aff_ab(t_list_int *a, t_list_int *b)
{
	(void)b;
	dprintf(1, "\na = ");
	ft_lstaff_int(a);
	dprintf(1, "\nb = ");
	ft_lstaff_int(b);
	ss(&a, &b);
	dprintf(1, "\na = ");
	ft_lstaff_int(a);
	dprintf(1, "\nb = ");
	ft_lstaff_int(b);
}

void	push_swap(int ac, char **av)
{
	t_list_int	*a;
	t_list_int	*b;

	if (ac == 2)
		ft_fill_lst_v1(&a, av[1]);
	else
		ft_fill_lst_v2(&a, av, ac);
	int i = -1;
	b = NULL;
	while (++i < 5)
		ft_lstadd_back_int(&b, i);
	ft_aff_ab(a, b);
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
