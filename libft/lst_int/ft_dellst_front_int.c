/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellst_front_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:29:41 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:06:58 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dellst_front_int(t_list_int **list)
{
	t_list_int	*tmp;

	if (list == NULL)
		return ;
	tmp = (*list)->next;
	free(*list);
	*list = tmp;
}
