/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:37:58 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/23 10:40:54 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_3(t_list_int **a)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = (*a)->content;
	n2 = (*a)->next->content;
	n3 = (*a)->next->next->content;
	if (n1 > n2 && n1 < n3)
		sa(a);
	else if (n1 > n2 && n2 > n3)
	{
		sa(a);
		rra(a);
	}
	else if (n1 > n2 && n1 > n3)
		ra(a);
	else if (n1 < n2 && n2 > n3 && n1 < n3)
	{
		sa(a);
		ra(a);
	}
	else
		rra(a);
}
