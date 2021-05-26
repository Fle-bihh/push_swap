/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:05:38 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:13 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	int				i_dst;
	int				i_src;

	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	i_dst = 0;
	i_src = 0;
	while (n--)
	{
		temp_dst[i_dst] = temp_src[i_src];
		if (temp_src[i_src] == (unsigned char)c)
			return (temp_dst + 1 + i_dst);
		i_dst++;
		i_src++;
	}
	return (NULL);
}
