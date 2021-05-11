/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:30:19 by fle-biha          #+#    #+#             */
/*   Updated: 2020/12/03 13:46:34 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i_new_s;

	if (len == 0 || start >= ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!(new_s = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	i_new_s = -1;
	while (s[start] && len--)
		new_s[++i_new_s] = s[start++];
	new_s[++i_new_s] = 0;
	return (new_s);
}
