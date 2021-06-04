/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:25:32 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/31 15:19:28 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_500_b(t_list_int **a, t_list_int **b)
{
	int	chunk;
	int	i;
	int	div;
	int	tmp;

	chunk = 1;
	div = ft_lstsize_int(*a) / 11;
	while (*a != NULL)
	{
		i = 0;
		tmp = ((ft_lstsize_int(*a) < div) * ft_lstsize_int(*a)) \
		 + (!(ft_lstsize_int(*a) < div) * div);
		while (i < tmp)
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

void	ft_sort_500_a(t_list_int **a, t_list_int **b)
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

void	ft_sort_500(t_list_int **a, t_list_int **b)
{
	int	*tab;

	tab = ft_sort_int(*a);
	ft_put_index(*a, tab);
	ft_sort_500_b(a, b);
	ft_sort_500_a(a, b);
	while ((*a)->content != ft_min_lst(*a))
	{
		if (ft_pos_int(*a, ft_min_lst(*a)) < ft_lstsize_int(*a) / 2)
			ra(a);
		else
			rra(a);
	}
	free(tab);
}
