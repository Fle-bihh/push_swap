/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:05:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/18 15:45:11 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_aff_ab(t_list_int *a, t_list_int *b)
{
	(void)b;
	dprintf(1, "\na = ");
	ft_lstaff_color_int(a, "\033[255;184;51m");
	dprintf(1, "\nb = ");
	ft_lstaff_color_int(b, "\033[51;233;255m");
	rrr(&a, &b);
	dprintf(1, "\na = ");
	ft_lstaff_color_int(a, "\033[255;184;51m");
	dprintf(1, "\nb = ");
	ft_lstaff_color_int(b, "\033[51;233;255m");
}

void	push_swap(int ac, char **av)
{
	t_list_int	*a;
	t_list_int	*b;
	t_info		stock;

	ft_bzero(&stock, sizeof(t_info));
	if (ac == 2)
		ft_fill_lst_v1(&a, av[1]);
	else
		ft_fill_lst_v2(&a, av, ac);
	b = NULL;
	stock.lst_size = ft_lstsize_int(a);
	ft_sort(&a, &b, &stock);
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
