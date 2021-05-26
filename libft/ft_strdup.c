/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:06:24 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:13:37 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		size;
	size_t		i_s;
	char		*new_s;

	size = ft_strlen(s1);
	i_s = 0;
	new_s = (char *)malloc(sizeof(char) * size + 1);
	if (!(new_s))
		return (0);
	while (i_s < size)
	{
		new_s[i_s] = s1[i_s];
		i_s++;
	}
	new_s[i_s] = '\0';
	if (new_s == NULL)
		return (0);
	return (new_s);
}
