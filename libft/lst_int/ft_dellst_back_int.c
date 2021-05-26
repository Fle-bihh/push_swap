/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellst_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:31:48 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 14:57:10 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dellst_back_int(t_list_int **list)
{
	t_list_int	*tmp;
	t_list_int	*ptmp;

	if (*list == NULL)
		return ;
	if ((*list)->next == NULL)
	{
		free(*list);
		*list = NULL;
		return ;
	}
	tmp = *list;
	ptmp = *list;
	while (tmp->next != NULL)
	{
		ptmp = tmp;
		tmp = tmp->next;
	}
	ptmp->next = NULL;
	free(tmp);
}
