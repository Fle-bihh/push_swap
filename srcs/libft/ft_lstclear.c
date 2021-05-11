/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:06:53 by fle-biha          #+#    #+#             */
/*   Updated: 2020/12/01 10:19:50 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = NULL;
		*lst = tmp;
	}
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = tmp;
	}
	free(*lst);
}
