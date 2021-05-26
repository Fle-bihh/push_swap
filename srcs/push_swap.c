/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:05:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 14:56:35 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	push_swap(int ac, char **av)
{
	t_list_int	*a;
	t_list_int	*b;

	b = NULL;
	ft_parsing(ac, av);
	ft_fill_lst(&a, av, ac);
	if (ft_is_sorted(a))
		exit(0);
	ft_sort(&a, &b);
	ft_lstclear_int(&a);
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
