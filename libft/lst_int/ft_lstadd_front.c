/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 16:32:41 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:07:10 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_front_int(t_list_int **list, int valeur)
{
	t_list_int	*new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->content = valeur;
	new->next = *list;
	*list = new;
}
