/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:49:01 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/19 13:24:38 by fle-biha         ###   ########lyon.fr   */
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
		min = ft_next_min(a, min);
		tab[i] = min;
	}
	// int k = -1;
	// while (++k < 500)
	// {
	// 	dprintf(1, "%d-", tab[k]);
	// }
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
		a->content = i + 1;
		a = a->next;
	}
}

int	ft_next_int(t_list_int *a, int min, int max)
{
	int	first;
	int	last;
	int	val_f;
	int	val_l;
	int	i;

	i = 0;
	while (a != NULL)
	{
		if (a->content <= max && a->content >= min)
		{
			val_f = a->content;
			first = i;
			break ;
		}
		a = a->next;
		i++;
	}
	while (a != NULL)
	{
		if (a->content < max && a->content > min)
		{
			val_l = a->content;
			last = i;
		}
		a = a->next;
		i++;
	}
	if (first < (ft_lstsize_int(a) - last))
		return (val_f);
	else
		return (val_l);
}
