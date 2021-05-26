/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:49:01 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:20:52 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	*ft_sort_int(t_list_int *a)
{
	int	i;
	int	*tab;
	int	min;

	tab = malloc(sizeof(int) * ft_lstsize_int(a));
	if (!(tab))
		return (0);
	i = 0;
	min = ft_min_lst(a);
	tab[0] = min;
	while (++i < ft_lstsize_int(a))
	{
		min = ft_next_min(a, min);
		tab[i] = min;
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
		a->content = i + 1;
		a = a->next;
	}
}
