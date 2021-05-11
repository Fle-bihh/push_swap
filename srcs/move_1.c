/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:08:52 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/11 22:11:17 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

t_list_int	*sa(t_list_int *a)
{
	int	tmp;

	tmp = ft_lstn_int(a, 0)->content;
	ft_dellst_front_int(&a);
	ft_lstadd_back_int(&a, ft_lstn_int(a, 0)->content);
	ft_dellst_front_int(&a);
	ft_lstadd_front_int(&a, tmp);
	ft_lstadd_front_int(&a, ft_lstlast_int(a)->content);
	ft_dellst_back_int(&a);
	return (a);
}

void	sb(t_list_int *a, t_list_int *b)
{
	int	tmp;

	tmp = a->content;
	a->content = b->content;
	b->content = tmp;
}
