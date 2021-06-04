/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:09:48 by fle-biha          #+#    #+#             */
/*   Updated: 2021/06/03 14:26:59 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_verif_duplicate(t_list_int *a)
{
	int	*tab;
	int	len;
	int	i;
	int	i2;

	len = ft_lstsize_int(a);
	tab = malloc(sizeof(int) * len);
	if (!(tab))
		ft_error_malloc();
	i = 0;
	while (a != NULL)
	{
		i2 = -1;
		while (++i2 < i)
			if (tab[i2] == a->content)
				ft_error();
		tab[i] = a->content;
		i++;
		a = a->next;
	}
	free(tab);
}
