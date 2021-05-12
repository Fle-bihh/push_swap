/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:08:52 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/12 14:15:31 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	sa(t_list_int **a)
{
	if (*a && (*a)->next)
	{
		ft_lstadd_front_int(a, ft_lstn_int(*a, 2)->content);
		ft_dellst_one_int(a, 3);
	}
}

void	sb(t_list_int **b)
{
	if (*b && (*b)->next)
	{
		ft_lstadd_front_int(b, ft_lstn_int(*b, 2)->content);
		ft_dellst_one_int(b, 3);
	}
}

void	ss(t_list_int **a, t_list_int **b)
{
	sa(a);
	sb(b);
}

void	pa(t_list_int **a, t_list_int **b)
{

}
