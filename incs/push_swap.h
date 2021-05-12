/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 11:06:03 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/12 13:35:02 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../srcs/libft/libft.h"

//	PUSH_SWAP.C
void		push_swap(int ac, char **av);

//	FT_FILL_LST.C
void		ft_fill_lst_v1(t_list_int **a, char *av);
void		ft_fill_lst_v2(t_list_int **a, char **av, int ac);

//	MOVE_1.c
void		sa(t_list_int **a);
void		sb(t_list_int **b);
void		ss(t_list_int **a, t_list_int **b);

#endif
