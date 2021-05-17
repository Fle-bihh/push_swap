/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:49:01 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/17 15:49:09 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	*ft_sort_int(t_info *stock, t_list_int *a)
{
	int	i;
	int	*tab;
	int	min;

	tab = malloc(sizeof(int) * stock->lst_size);
	if (!(tab))
		return (0);
	i = 0;
	min = ft_min_lst(a);
	tab[0] = min;
	while (++i < stock->lst_size)
	{
		tab[i] = ft_next_min(a, min);
		min = ft_next_min(a, min);
	}
	return (tab);
}

void	ft_put_index(t_list_int *a, int *tab)
{
	int	i;

	while (a != NULL)
	{
		i = 0;
		while (tab[i] != a->content)
			i++;
		a->content = i;
		a = a->next;
	}
}

int	ft_next_int(t_list_int *a, int min, int max)
{
	int	index;
	int	next_int;

	index = 0;
	next_int = 0;
	while (a != NULL)
	{
		if (a->content < max && a->content > min)

	}
}
