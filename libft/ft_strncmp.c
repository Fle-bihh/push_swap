/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:16:25 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:14:47 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i_tmp;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i_tmp = -1;
	while (++i_tmp < n)
		if (tmp_s1[i_tmp] != tmp_s2[i_tmp] || !tmp_s1[i_tmp])
			return (tmp_s1[i_tmp] - tmp_s2[i_tmp]);
	return (0);
}
