/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:39:36 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:38 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i_tmp;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	i_tmp = 0;
	if (dst > src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i_tmp < len)
		{
			tmp_dst[i_tmp] = tmp_src[i_tmp];
			i_tmp++;
		}
	}
	return (dst);
}
