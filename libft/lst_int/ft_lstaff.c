/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:32:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:16:31 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstaff_int(t_list_int *list)
{
	t_list_int	*tmp;

	tmp = list;
	while (tmp != NULL)
	{
		dprintf(1, "%d->", tmp->content);
		tmp = tmp->next;
	}
	dprintf(1, "NULL\n");
}

void	ft_lstaff_color_int(t_list_int *list, char *color)
{
	t_list_int	*tmp;

	tmp = list;
	while (tmp != NULL)
	{
		dprintf(1, "%s%d\033[0m->", color, tmp->content);
		tmp = tmp->next;
	}
	dprintf(1, "\033[31mNULL\033[0m\n");
}
