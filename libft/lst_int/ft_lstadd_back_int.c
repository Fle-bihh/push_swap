/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:32:34 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:07:08 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back_int(t_list_int **list, int valeur)
{
	t_list_int	*new;
	t_list_int	*tmp;

	new = malloc(sizeof(*new));
	if (new == NULL)
		exit(EXIT_FAILURE);
	if (*list == NULL)
	{
		new->content = valeur;
		new->next = NULL;
		*list = new;
		return ;
	}
	else
	{
		new->content = valeur;
		new->next = NULL;
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
