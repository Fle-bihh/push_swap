/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:04:27 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/20 15:03:43 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	rra(t_list_int **a)
{
	ft_lstadd_front_int(a, ft_lstlast_int(*a)->content);
	ft_dellst_back_int(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list_int **b)
{
	ft_lstadd_front_int(b, ft_lstlast_int(*b)->content);
	ft_dellst_back_int(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list_int **a, t_list_int **b)
{
	rra(a);
	rrb(b);
	ft_putstr_fd("rrr\n", 1);
}
