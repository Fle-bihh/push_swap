/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:58:35 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/20 14:59:55 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ra(t_list_int **a)
{
	ft_lstadd_back_int(a, (*a)->content);
	ft_dellst_front_int(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list_int **b)
{
	ft_lstadd_back_int(b, (*b)->content);
	ft_dellst_front_int(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list_int **a, t_list_int **b)
{
	ra(a);
	rb(b);
	ft_putstr_fd("rr\n", 1);
}
