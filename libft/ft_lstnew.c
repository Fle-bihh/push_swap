/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:44:32 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:21:28 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!(lst))
		ft_error_malloc();
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
