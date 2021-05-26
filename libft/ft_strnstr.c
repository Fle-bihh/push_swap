/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:23:25 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:14:51 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i_s1;
	size_t		i_s2;
	size_t		stop;

	stop = len;
	if (s2[0] == 0)
		return ((char *)s1);
	if (s1[0] == 0)
		return (0);
	if (len == 0)
		return (NULL);
	i_s1 = -1;
	while (s1[++i_s1] && len > 0)
	{
		i_s2 = 0;
		while (s1[i_s1 + i_s2] == s2[i_s2] && i_s1 + i_s2 < stop)
			if (!s2[++i_s2])
				return ((char *)s1 + i_s1);
		len--;
	}
	return (0);
}
