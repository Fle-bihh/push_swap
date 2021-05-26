/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:05:48 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:11:27 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	int				i_s1;
	int				i_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i_s1 = 0;
	i_s2 = 0;
	while (n--)
	{
		if (tmp_s1[i_s1] != tmp_s2[i_s2])
			return (tmp_s1[i_s1] - tmp_s2[i_s2]);
		i_s1++;
		i_s2++;
	}
	return (0);
}
