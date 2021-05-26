/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:32:11 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 14:55:38 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_100_b(t_list_int **a, t_list_int **b)
{
	int	chunk;
	int	i;
	int	div;

	chunk = 1;
	div = ft_lstsize_int(*a) / 4;
	while (chunk <= 4)
	{
		i = 0;
		if (ft_lstsize_int(*a) < div)
			div = ft_lstsize_int(*a);
		while (i < div)
		{
			if ((*a)->content > (chunk * div - div) \
			&& (*a)->content <= (chunk * div))
			{
				pb(a, b);
				i++;
			}
			else
				ra(a);
		}
		chunk++;
	}
}

void	ft_sort_100_a(t_list_int **a, t_list_int **b)
{
	while (ft_lstsize_int(*b) > 0)
	{
		if (*a != NULL)
		{
			while (ft_max_lst(*a) > (*b)->content && \
			(*a)->content != ft_next_min(*a, (*b)->content))
			{
				if (ft_pos_int(*a, ft_next_min(*a, \
				(*b)->content)) < ft_lstsize_int(*a) / 2)
					ra(a);
				else
					rra(a);
			}
			while (ft_max_lst(*a) <= (*b)->content && \
			(*a)->content != ft_min_lst(*a))
			{
				if (ft_pos_int(*a, ft_min_lst(*a)) < ft_lstsize_int(*a) / 2)
					ra(a);
				else
					rra(a);
			}
		}
		pa(a, b);
	}
}

void	ft_sort_100(t_list_int **a, t_list_int **b)
{
	int	*tab;

	tab = ft_sort_int(*a);
	ft_put_index(*a, tab);
	ft_sort_100_b(a, b);
	ft_sort_100_a(a, b);
	while ((*a)->content != ft_min_lst(*a))
	{
		if (ft_pos_int(*a, ft_min_lst(*a)) < ft_lstsize_int(*a) / 2)
			ra(a);
		else
			rra(a);
	}
	free(tab);
}
