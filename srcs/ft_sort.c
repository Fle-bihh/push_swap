/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:27:08 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:05:46 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort(t_list_int **a, t_list_int **b)
{
	int	len;

	len = ft_lstsize_int(*a);
	if (len == 3)
		ft_sort_3(a);
	else if (len <= 5)
		ft_sort_4_5(a, b);
	else if (len <= 200)
		ft_sort_100(a, b);
	else
		ft_sort_500(a, b);
}
