/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:46:11 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:22 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i_tmp;
	size_t			i_n;

	tmp = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	if (c == 0)
		return ((void *)s + ft_strlen(s));
	i_tmp = 0;
	i_n = 0;
	while (i_n < n)
	{
		if (tmp[i_tmp] == (unsigned char)c)
			return ((void *)tmp + i_tmp);
		i_n++;
		i_tmp++;
	}
	return (0);
}
