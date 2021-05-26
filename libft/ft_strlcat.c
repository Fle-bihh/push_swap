/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:40:22 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:14:11 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t n)
{
	size_t	len;

	len = 0;
	while (s[len] && n--)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i_src;
	size_t		dest_size;
	size_t		i_dst;

	dest_size = ft_strnlen(dest, size);
	if (dest_size == size)
		return (dest_size + ft_strlen(src));
	i_src = -1;
	i_dst = dest_size;
	while (src[++i_src] && i_dst < size - 1)
		dest[i_dst++] = src[i_src];
	dest[i_dst] = 0;
	return (dest_size + ft_strlen(src));
}
