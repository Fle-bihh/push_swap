/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:25:32 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/19 14:23:18 by fle-biha         ###   ########lyon.fr   */
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

// void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
// {
// 	int	*tab;
// 	int	tmp;
// 	int	i;
// 	int	chunk;

// 	(void)b;
// 	tab = ft_sort_int(stock, *a);
// 	ft_put_index(*a, tab);
// 	ft_lstaff_int(*a);
// 	stock->nmb_ope = 0;
// 	i = -1;
// 	chunk = 1;
// 	while (++i < chunk * 50)
// 	{
// 		tmp = ft_next_int(*a, (chunk * 50 - 50), (chunk * 50 - 1));
// 		while ((*a)->content != tmp)
// 		{
// 			if (ft_pos_int(*a, tmp) > (ft_lstsize_int(*a) / 2))
// 			{
// 				rra(a);
// 				ft_putstr_fd("rra\n", 1);
// 			}
// 			else
// 			{
// 				ra(a);
// 				ft_putstr_fd("ra\n", 1);
// 			}
// 			stock->nmb_ope++;
// 		}
// 		if (*b != NULL)
// 		{
// 			if (ft_next_min(*b, tmp) <= tmp)
// 			{
// 				while ((*b)->content != ft_max_lst(*b))
// 				{
// 					if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 					{
// 						rb(b);
// 						ft_putstr_fd("rb\n", 1);
// 					}
// 					else
// 					{
// 						rrb(b);
// 						ft_putstr_fd("rrb\n", 1);
// 					}
// 					stock->nmb_ope++;
// 				}
// 			}
// 			else
// 			{
// 				while ((*b)->content != ft_next_min(*b, tmp))
// 				{
// 					if (ft_pos_int(*a, ft_next_min(*b, tmp)) < (ft_lstsize_int(*b) / 2))
// 					{
// 						rb(b);
// 						ft_putstr_fd("rb\n", 1);
// 					}
// 					else
// 					{
// 						rrb(b);
// 						ft_putstr_fd("rrb\n", 1);
// 					}
// 					stock->nmb_ope++;
// 				}
// 				rb(b);
// 				ft_putstr_fd("rb\n", 1);
// 				stock->nmb_ope++;
// 			}
// 		}
// 		pb(a, b);
// 		ft_putstr_fd("pb\n", 1);
// 		stock->nmb_ope++;
// 	}
// 	while ((*b)->content != ft_max_lst(*b))
// 	{
// 		if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 		{
// 			rb(b);
// 			ft_putstr_fd("rb\n", 1);
// 		}
// 		else
// 		{
// 			rrb(b);
// 			ft_putstr_fd("rrb\n", 1);
// 		}
// 		stock->nmb_ope++;
// 	}
// 	while (ft_lstsize_int(*b) > 0)
// 	{
// 		pa(a, b);
// 		ft_putstr_fd("pa\n", 1);
// 		stock->nmb_ope++;
// 	}
// 	chunk++;
// 	i--;
// 	while (chunk <= 9)
// 	{
// 		while (++i < chunk * 50)
// 		{
// 			tmp = ft_next_int(*a, (chunk * 50 - 50), (chunk * 50 - 1));
// 			while ((*a)->content != tmp)
// 			{
// 				if (ft_pos_int(*a, tmp) > (ft_lstsize_int(*a) / 2))
// 				{
// 					rra(a);
// 					ft_putstr_fd("rra\n", 1);
// 				}
// 				else
// 				{
// 					ra(a);
// 					ft_putstr_fd("ra\n", 1);
// 				}
// 				stock->nmb_ope++;
// 			}
// 			if (*b != NULL)
// 			{
// 				if (ft_next_min(*b, tmp) <= tmp)
// 				{
// 					while ((*b)->content != ft_max_lst(*b))
// 					{
// 						if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 						{
// 							rb(b);
// 							ft_putstr_fd("rb\n", 1);
// 						}
// 						else
// 						{
// 							rrb(b);
// 							ft_putstr_fd("rrb\n", 1);
// 						}
// 						stock->nmb_ope++;
// 					}
// 				}
// 				else
// 				{
// 					while ((*b)->content != ft_next_min(*b, tmp))
// 					{
// 						if (ft_pos_int(*a, ft_next_min(*b, tmp)) < (ft_lstsize_int(*b) / 2))
// 						{
// 							rb(b);
// 							ft_putstr_fd("rb\n", 1);
// 						}
// 						else
// 						{
// 							rrb(b);
// 							ft_putstr_fd("rrb\n", 1);
// 						}
// 						stock->nmb_ope++;
// 					}
// 					rb(b);
// 					ft_putstr_fd("rb\n", 1);
// 					stock->nmb_ope++;
// 				}
// 			}
// 			pb(a, b);
// 			ft_putstr_fd("pb\n", 1);
// 			stock->nmb_ope++;
// 		}
// 		while ((*b)->content != ft_max_lst(*b))
// 		{
// 			if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 			{
// 				rb(b);
// 				ft_putstr_fd("rb\n", 1);
// 			}
// 			else
// 			{
// 				rrb(b);
// 				ft_putstr_fd("rrb\n", 1);
// 			}
// 			stock->nmb_ope++;
// 		}
// 		while ((*a)->content != ((chunk - 1) * 50 - 1))
// 		{
// 			if (ft_pos_int(*a, ((chunk - 1) * 50 - 1)) < (ft_lstsize_int(*a) / 2))
// 			{
// 				ra(a);
// 				ft_putstr_fd("ra\n", 1);
// 			}
// 			else
// 			{
// 				rra(a);
// 				ft_putstr_fd("rra\n", 1);
// 			}
// 			stock->nmb_ope++;
// 		}
// 		ra(a);
// 		ft_putstr_fd("ra\n", 1);
// 		stock->nmb_ope++;
// 		while (ft_lstsize_int(*b) > 0)
// 		{
// 			pa(a, b);
// 			ft_putstr_fd("pa\n", 1);
// 			stock->nmb_ope++;
// 		}
// 		chunk++;
// 		i--;
// 	}
// 	ft_lstaff_int(*a);
// 	dprintf(1, "\n%d\n", stock->nmb_ope);
// }

// void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
// {
// 	int	*tab;
// 	int	tmp;
// 	int	i;
// 	int	chunk;

// 	tab = ft_sort_int(stock, *a);
// 	ft_put_index(*a, tab);
// 	stock->nmb_ope = 0;
// 	i = -1;
// 	chunk = 10;
// 	while (chunk > 1)
// 	{
// 		while (ft_lstsize_int(*b) < 50)
// 		{
// 			tmp = (*a)->content;
// 			if (tmp > (chunk * 50 - 50) && tmp <= (chunk * 50))
// 			{
// 				if (*b != NULL)
// 				{
// 					if (ft_next_min(*b, tmp) <= tmp)
// 					{
// 						while ((*b)->content != ft_max_lst(*b))
// 						{
// 							if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 							{
// 								rb(b);
// 								ft_putstr_fd("rb\n", 1);
// 							}
// 							else
// 							{
// 								rrb(b);
// 								ft_putstr_fd("rrb\n", 1);
// 							}
// 							stock->nmb_ope++;
// 						}
// 					}
// 					else
// 					{
// 						while ((*b)->content != ft_next_min(*b, tmp))
// 						{
// 							if (ft_pos_int(*a, ft_next_min(*b, tmp)) < (ft_lstsize_int(*b) / 2))
// 							{
// 								rb(b);
// 								ft_putstr_fd("rb\n", 1);
// 							}
// 							else
// 							{
// 								rrb(b);
// 								ft_putstr_fd("rrb\n", 1);
// 							}
// 							stock->nmb_ope++;
// 						}
// 						rb(b);
// 						ft_putstr_fd("rb\n", 1);
// 						stock->nmb_ope++;
// 					}
// 				}
// 				pb(a, b);
// 				ft_putstr_fd("pb\n", 1);
// 				stock->nmb_ope++;
// 			}
// 			else
// 			{
// 				ra(a);
// 				ft_putstr_fd("ra\n", 1);
// 				stock->nmb_ope++;
// 			}
// 		}
// 		while ((*b)->content != ft_max_lst(*b))
// 		{
// 			if (ft_pos_int(*b, ft_max_lst(*b)) < ft_lstsize_int(*b) / 2)
// 			{
// 				rb(b);
// 				ft_putstr_fd("rb\n", 1);
// 			}
// 			else
// 			{
// 				rrb(b);
// 				ft_putstr_fd("rrb\n", 1);
// 			}
// 			stock->nmb_ope++;
// 		}
// 		if (chunk < 10)
// 		{
// 			while ((*a)->content != (chunk - 1) * 50 - 1)
// 			{
// 				if (ft_pos_int(*a, (chunk - 1) * 50 - 1) < ft_lstsize_int(*a) / 2)
// 				{
// 					ra(a);
// 					ft_putstr_fd("ra\n", 1);
// 				}
// 				else
// 				{
// 					rra(a);
// 					ft_putstr_fd("rra\n", 1);
// 				}
// 				stock->nmb_ope++;
// 			}
// 			ra(a);
// 			ft_putstr_fd("ra\n", 1);
// 			stock->nmb_ope++;
// 		}
// 		while (ft_lstsize_int(*b) > 0)
// 		{
// 			pa(a, b);
// 			ft_putstr_fd("pa\n", 1);
// 			stock->nmb_ope++;
// 		}
// 		chunk--;
// 	}
// 	while (ft_lstsize_int(*b) < 49)
// 	{
// 		tmp = (*a)->content;
// 		if (tmp > (chunk * 50 - 50) && tmp <= (chunk * 50))
// 		{
// 			if (*b != NULL)
// 			{
// 				if (ft_next_min(*b, tmp) <= tmp)
// 				{
// 					while ((*b)->content != ft_max_lst(*b))
// 					{
// 						if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
// 						{
// 							rb(b);
// 							ft_putstr_fd("rb\n", 1);
// 						}
// 						else
// 						{
// 							rrb(b);
// 							ft_putstr_fd("rrb\n", 1);
// 						}
// 						stock->nmb_ope++;
// 					}
// 				}
// 				else
// 				{
// 					while ((*b)->content != ft_next_min(*b, tmp))
// 					{
// 						if (ft_pos_int(*a, ft_next_min(*b, tmp)) < (ft_lstsize_int(*b) / 2))
// 						{
// 							rb(b);
// 						ft_putstr_fd("rb\n", 1);
// 						}
// 						else
// 						{
// 							rrb(b);
// 							ft_putstr_fd("rrb\n", 1);
// 						}
// 						stock->nmb_ope++;
// 					}
// 					rb(b);
// 					ft_putstr_fd("rb\n", 1);
// 					stock->nmb_ope++;
// 			}
// 		}
// 			pb(a, b);
// 			ft_putstr_fd("pb\n", 1);
// 			stock->nmb_ope++;
// 		}
// 		else
// 		{
// 			ra(a);
// 			ft_putstr_fd("ra\n", 1);
// 			stock->nmb_ope++;
// 		}
// 	}
// 	while ((*b)->content != ft_max_lst(*b))
// 	{
// 		if (ft_pos_int(*b, ft_max_lst(*b)) < ft_lstsize_int(*b) / 2)
// 		{
// 			rb(b);
// 			ft_putstr_fd("rb\n", 1);
// 		}
// 		else
// 		{
// 			rrb(b);
// 			ft_putstr_fd("rrb\n", 1);
// 		}
// 		stock->nmb_ope++;
// 	}
// 	if (chunk < 10)
// 	{
// 		while ((*a)->content != (chunk - 1) * 50 - 1)
// 		{
// 			if (ft_pos_int(*a, (chunk - 1) * 50 - 1) < ft_lstsize_int(*a) / 2)
// 			{
// 				ra(a);
// 				ft_putstr_fd("ra\n", 1);
// 			}
// 			else
// 			{
// 				rra(a);
// 				ft_putstr_fd("rra\n", 1);
// 		}
// 		stock->nmb_ope++;
// 		}
// 		ra(a);
// 		ft_putstr_fd("ra\n", 1);
// 		stock->nmb_ope++;
// 	}
// 	while (ft_lstsize_int(*b) > 0)
// 	{
// 		pa(a, b);
// 		ft_putstr_fd("pa\n", 1);
// 		stock->nmb_ope++;
// 	}
// 	chunk--;
// 	ft_lstaff_int(*a);
// 	ft_lstaff_int(*b);
// }

void	ft_sort(t_list_int **a, t_list_int **b, t_info *stock)
{
	int	*tab;
	int	chunk;
	int	tmp;

	tab = ft_sort_int(stock, *a);
	ft_put_index(*a, tab);
	chunk = 10;
	while (chunk > 0)
	{
		while (ft_lstsize_int(*b) < 50)
		{
			tmp = (*a)->content;
			if (tmp > (chunk * 50 - 50) && tmp <= (chunk * 50))
			{
				if (*b != NULL)
				{
					if (ft_next_min(*b, tmp) <= tmp)
					{
						while ((*b)->content != ft_max_lst(*b))
						{
							if (ft_pos_int(*a, ft_max_lst(*b)) < (ft_lstsize_int(*b) / 2))
							{
								rb(b);
								ft_putstr_fd("rb\n", 1);
							}
							else
							{
								rrb(b);
								ft_putstr_fd("rrb\n", 1);
							}
							stock->nmb_ope++;
						}
					}
					else
					{
						while ((*b)->content != ft_next_min(*b, tmp))
						{
							if (ft_pos_int(*a, ft_next_min(*b, tmp)) < (ft_lstsize_int(*b) / 2))
							{
								rb(b);
								ft_putstr_fd("rb\n", 1);
							}
							else
							{
								rrb(b);
								ft_putstr_fd("rrb\n", 1);
							}
							stock->nmb_ope++;
						}
						rb(b);
						ft_putstr_fd("rb\n", 1);
						stock->nmb_ope++;
					}
				}
				pb(a, b);
				ft_putstr_fd("pb\n", 1);
				stock->nmb_ope++;
			}
			else
			{
				rra(a);
				ft_putstr_fd("rra\n", 1);
				stock->nmb_ope++;
			}
		}
		if (chunk < 5)
		{
			while ((*a)->content != (chunk * 50 + 1))
			{
				if (ft_pos_int(*a, (chunk * 50 + 1)) < ft_lstsize_int(*a) / 2)
				{
					ra(a);
					ft_putstr_fd("ra\n", 1);
				}
				else
				{
					rra(a);
					ft_putstr_fd("rra\n", 1);
				}
				stock->nmb_ope++;
			}
		}
		while ((*b)->content != ft_max_lst(*b))
		{
			if (ft_pos_int(*b, ft_max_lst(*b)) < ft_lstsize_int(*b) / 2)
			{
				rb(b);
				ft_putstr_fd("rb\n", 1);
			}
			else
			{
				rrb(b);
				ft_putstr_fd("rrb\n", 1);
			}
			stock->nmb_ope++;
		}
		while (ft_lstsize_int(*b) > 0)
		{
			pa(a, b);
			ft_putstr_fd("pa\n", 1);
			stock->nmb_ope++;
		}
		chunk--;
	}
	dprintf(1, "nmb_ope = %d\n", stock->nmb_ope);
}
