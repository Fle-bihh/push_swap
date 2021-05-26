/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:07:01 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:14:57 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i_s;

	i_s = ft_strlen(s);
	if (!(c))
		return ((char *)s + ft_strlen(s));
	while (i_s)
		if (s[--i_s] == c)
			return ((char *)(s += i_s));
	return (NULL);
}
