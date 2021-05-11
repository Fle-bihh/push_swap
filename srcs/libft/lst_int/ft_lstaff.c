/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:32:49 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/11 17:16:46 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstaff_int(t_list_int *list)
{
	t_list_int *tmp;

	tmp = list;
	while (tmp != NULL)
	{
		printf("%d->", tmp->content);
		tmp = tmp->next;
	}
	printf("NULL\n");
}

void	ft_lstaff_color_int(t_list_int *list, char *color)
{
	t_list_int *tmp;

	tmp = list;
	while (tmp != NULL)
	{
		printf("%s%d\033[0m->", color, tmp->content);
		tmp = tmp->next;
	}
	printf("\033[31mNULL\033[0m\n");
}
