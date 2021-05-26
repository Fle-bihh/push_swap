/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:48:28 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:34 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i_tmp;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (dest);
	i_tmp = -1;
	while (++i_tmp < n)
		tmp_dest[i_tmp] = tmp_src[i_tmp];
	return (dest);
}
