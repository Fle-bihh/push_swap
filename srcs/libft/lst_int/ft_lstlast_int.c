/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:33:05 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/11 17:16:56 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list_int	*ft_lstlast_int(t_list_int *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_list_int	*ft_lstn_int(t_list_int *lst, int n)
{
	int	limit;

	limit = 1;
	if (!lst)
		return (NULL);
	while (limit++ < n && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
