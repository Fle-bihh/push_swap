/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:05:59 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:41 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i_tmp;

	i_tmp = 0;
	tmp = (unsigned char *)b;
	while (i_tmp < len)
		tmp[i_tmp++] = c;
	return (b);
}
