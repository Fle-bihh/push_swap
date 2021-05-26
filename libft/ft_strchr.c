/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:06:16 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:12:56 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;
	size_t	i_tmp;

	i_tmp = 0;
	tmp_s = (char *)s;
	if (!(c))
		return (tmp_s + ft_strlen(s));
	while (i_tmp < ft_strlen(s))
	{
		if (tmp_s[i_tmp] == c)
			return (tmp_s + i_tmp);
		i_tmp++;
	}
	return (NULL);
}
