/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:25:32 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/17 15:56:34 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

// void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
// {
// 	int	min;

// 	stock->nmb_ope = 0;
// 	min = ft_min_lst(*a);
// 	while ((*a)->content > min)
// 	{
// 		ra(a);
// 		stock->nmb_ope++;
// 	}
// 	ft_lstaff_int(*a);
// 	ra(a);
// 	while (ft_lstsize_int(*a) > 1)
// 	{
// 		pb(a, b);
// 		stock->nmb_ope++;
// 	}
// 	ft_lstaff_int(*a);
// 	while (ft_lstsize_int(*b) > 0)
// 	{
// 		min = ft_min_lst(*b);
// 		if ((*b)->content == min)
// 		{
// 			pa(a, b);
// 			ra(a);
// 			stock->nmb_ope += 2;
// 		}
// 		else
// 		{
// 			rb(b);
// 			stock->nmb_ope++;
// 		}
// 	}
// 	ft_lstaff_int(*a);
// 	dprintf(1, "nmb_ope = %d\n", stock->nmb_ope);
// }

// void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
// {
// 	int	min;

// 	stock->nmb_ope = 0;
// 	min = ft_min_lst(*a);
// 	// ft_lstaff_int(*a);
// 	while ((*a)->content > min)
// 	{
// 		ra(a);
// 		stock->nmb_ope++;
// 	}
// 	// ft_lstaff_int(*a);
// 	dprintf(1, "min = %d\n", min);
// 	ra(a);
// 	stock->nmb_ope++;
// 	// while (ft_next_min(*a, min) > min)
// 	// {
// 	// 	while ((*a)->content != ft_next_min(*a, min))
// 	// 	{
// 	// 		pb(a, b);
// 	// 		stock->nmb_ope++;
// 	// 	}
// 	// 	min = ft_next_min(*a, min);
// 	// 	ra(a);
// 	// 	stock->nmb_ope++;
// 	// }
// 	while (ft_lstsize_int(*a) > 1)
// 	{
// 		pb(a, b);
// 		stock->nmb_ope++;
// 	}
// 	while (ft_lstsize_int(*b) > 0)
// 	{
// 		// dprintf(1, "b = ");
// 		// ft_lstaff_int(*b);
// 		// dprintf(1, "a = ");
// 		// ft_lstaff_int(*a);
// 		min = ft_min_lst(*b);
// 		while ((*b)->content != min)
// 		{
// 			if (ft_pos_int(*b, min) > (ft_lstsize_int(*b) / 2))
// 				rrb(b);
// 			else
// 				rb(b);
// 			stock->nmb_ope++;
// 		}
// 		pa(a, b);
// 		ra(a);
// 		stock->nmb_ope += 2;
// 	}
// 	ft_lstaff_int(*a);
// 	dprintf(1, "nmb_ope = %d\n", stock->nmb_ope);
// }

/*
liste a = tous les int
je prends le min de a
je trouve le next_min et je vire tout entre
si le next_min est dans a je vire tout entre
sinon je le ramene de b
*/

// void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
// {
// 	int	min;

// 	stock->nmb_ope = 0;
// 	min = ft_min_lst(*a);
// 	while ((*a)->content > min)
// 	{
// 		if (ft_pos_int(*a, min) < (ft_lstsize_int(*a) / 2))
// 		{
// 			ra(a);
// 			ft_putstr_fd("ra\n", 1);
// 		}
// 		else
// 		{
// 			rra(a);
// 			ft_putstr_fd("rra\n", 1);
// 		}
// 		stock->nmb_ope++;
// 	}
// 	ra(a);
// 	ft_putstr_fd("ra\n", 1);
// 	while (!(ft_is_sorted(*a)) || ft_lstsize_int(*b) > 0)
// 	{
// 		if (ft_next_min(*a, min) > min && ft_next_min(*a, min) < ft_min_lst(*b))
// 		{
// 			while ((*a)->content != ft_next_min(*a, min))
// 			{
// 				pb(a, b);
// 				ft_putstr_fd("pb\n", 1);
// 				stock->nmb_ope++;
// 			}
// 			ra(a);
// 			ft_putstr_fd("ra\n", 1);
// 			stock->nmb_ope++;
// 			min = ft_next_min(*a, min);
// 		}
// 		else
// 		{
// 			min = ft_min_lst(*b);
// 			while ((*b)->content != min)
// 			{
// 				if (ft_pos_int(*b, min) > (ft_lstsize_int(*b) / 2))
// 				{
// 					rrb(b);
// 					ft_putstr_fd("rrb\n", 1);
// 				}
// 				else
// 				{
// 					rb(b);
// 					ft_putstr_fd("rb\n", 1);
// 				}
// 				stock->nmb_ope++;
// 			}
// 			pa(a, b);
// 			ft_putstr_fd("pa\n", 1);
// 			ra(a);
// 			ft_putstr_fd("ra\n", 1);
// 			stock->nmb_ope += 2;
// 		}
// 	}
// 	// ft_lstaff_int(*a);
// 	// dprintf(1, "nmb_ope = %d\n", stock->nmb_ope);
// }

void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
{
	int	*tab;
	int	i;

	(void)b;
	tab = ft_sort_int(stock, *a);
	ft_put_index(*a, tab);
	ft_lstaff_int(*a);
	stock->nmb_ope = 0;
	i = -1;
	while (++i < 50)
	{
		while ((*a)->content != ft_next_int(*a, 0, 49))
		{
			if (ft_pos_int(*a, ft_next_int(*a, 0, 49)) > (ft_lstsize_int(*a) / 2))
			{
				rra(a);
				ft_putstr_fd("rra\n", 1);
			}
			else
			{
				ra(a);
				ft_putstr_fd("ra\n", 1);
			}
			stock->nmb_ope++;
		}
	}
}
