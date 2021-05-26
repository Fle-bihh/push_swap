/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellst_one_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:29:20 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:06:19 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dellst_one_int(t_list_int **list, int i)
{
	t_list_int	*tmp;
	t_list_int	*ptmp;
	int			limit;

	limit = 1;
	if (*list == NULL || ft_lstsize_int(*list) < i)
		return ;
	if ((*list)->next == NULL)
	{
		free(*list);
		*list = NULL;
		return ;
	}
	tmp = *list;
	ptmp = *list;
	while (limit++ != i && tmp->next != NULL)
	{
		ptmp = tmp;
		tmp = tmp->next;
	}
	ptmp->next = tmp->next;
	if (tmp->next == NULL)
		ptmp->next = NULL;
	free(tmp);
}
