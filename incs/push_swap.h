/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:06:03 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/20 14:28:27 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
#include <limits.h>
# include "../srcs/libft/libft.h"

typedef struct	s_info
{
	int			lst_size;
	int			nmb_ope;
}				t_info;

//	PUSH_SWAP.C
void		push_swap(int ac, char **av);

//	FT_FILL_LST.C
void		ft_fill_lst_v1(t_list_int **a, char *av);
void		ft_fill_lst_v2(t_list_int **a, char **av, int ac);

//	MOVE_1.c
void		sa(t_list_int **a);
void		sb(t_list_int **b);
void		ss(t_list_int **a, t_list_int **b);
void		pa(t_list_int **a, t_list_int **b);
void		pb(t_list_int **a, t_list_int **b);

//	MOVE_2.C
void		ra(t_list_int **a);
void		rb(t_list_int **b);
void		rr(t_list_int **a, t_list_int **b);

//	MOVE_3.C
void		rra(t_list_int **a);
void		rrb(t_list_int **b);
void		rrr(t_list_int **a, t_list_int **b);

//	UTILS_LST.C
int			ft_is_sorted(t_list_int *a);
int			ft_min_lst(t_list_int *a);
int			ft_max_lst(t_list_int *a);
int			ft_next_min(t_list_int *a, int min);
int			ft_pos_int(t_list_int *a, int d);

//	FT_SORT_INT.C
int			*ft_sort_int(t_info *stock, t_list_int *a);
void		ft_put_index(t_list_int *a, int *tab);
int			ft_next_int(t_list_int *a, int min, int max);

//	FT_SORT.C
void		ft_sort(t_list_int **a, t_list_int **b, t_info *stock);

#endif
