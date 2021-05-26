/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:43:19 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/23 12:01:14 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_4_5(t_list_int **a, t_list_int **b)
{
	int	i;

	if (ft_lstsize_int(*a) == 5)
		pb(a, b);
	if (ft_lstsize_int(*a) == 4)
		pb(a, b);
	ft_sort_3(a);
	i = -1;
	while (++i < 2)
	{
		if (*b != NULL)
		{
			if ((*b)->content > ft_max_lst(*a))
				while ((*a)->content != ft_min_lst(*a))
					ra(a);
			else
				while ((*a)->content != ft_next_min(*a, (*b)->content))
					ra(a);
			pa(a, b);
		}
	}
	while ((*a)->content != ft_min_lst(*a))
		ra(a);
}
