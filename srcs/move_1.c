/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:08:52 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/20 14:59:28 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	sa(t_list_int **a)
{
	if (ft_lstsize_int(*a) >= 2)
	{
		ft_lstadd_front_int(a, ft_lstn_int(*a, 2)->content);
		ft_dellst_one_int(a, 3);
	}
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list_int **b)
{
	if (ft_lstsize_int(*b) >= 2)
	{
		ft_lstadd_front_int(b, ft_lstn_int(*b, 2)->content);
		ft_dellst_one_int(b, 3);
	}
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_list_int **a, t_list_int **b)
{
	sa(a);
	sb(b);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_list_int **a, t_list_int **b)
{
	if (*b)
	{
		ft_lstadd_front_int(a, (*b)->content);
		ft_dellst_front_int(b);
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list_int **a, t_list_int **b)
{
	if (*a)
	{
		ft_lstadd_front_int(b, (*a)->content);
		ft_dellst_front_int(a);
	}
	ft_putstr_fd("pb\n", 1);
}
