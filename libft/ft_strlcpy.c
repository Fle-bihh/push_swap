/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:06:45 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:14:16 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dst)
{
	size_t		size_src;
	size_t		i_s;

	size_src = ft_strlen(src);
	if (size_dst == 0)
		return (size_src);
	i_s = -1;
	while (++i_s < size_dst - 1 && src[i_s])
		dst[i_s] = src[i_s];
	dst[i_s] = 0;
	return (size_src);
}
