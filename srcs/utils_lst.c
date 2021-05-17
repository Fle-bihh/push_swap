/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:47:31 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/16 11:14:39 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int		ft_is_sorted(t_list_int *a)
{
	while (a != NULL && a->next != NULL)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int		ft_min_lst(t_list_int *a)
{
	int	min;

	min = INT_MAX;
	while (a != NULL)
	{
		if (min > a->content)
			min = a->content;
		a = a->next;
	}
	return (min);
}

int		ft_max_lst(t_list_int *a)
{
	int	max;

	max = a->content;
	while (a != NULL)
	{
		if (max < a->content)
			max = a->content;
		a = a->next;
	}
	return (max);
}

int		ft_next_min(t_list_int *a, int min)
{
	int	next_min;

	if (ft_lstsize_int(a) < 2)
		return (min);
	next_min = ft_max_lst(a);
	while (a != NULL)
	{
		if (next_min > a->content && min < a->content)
			next_min = a->content;
		a = a->next;
	}
	return (next_min);
}

int		ft_pos_int(t_list_int *a, int d)
{
	int pos;

	pos = 1;
	while (a != NULL)
	{
		if (a->content == d)
			return (pos);
		pos++;
		a = a->next;
	}
	return (0);
}
