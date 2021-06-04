/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:02:52 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:23:01 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, const char *set)
{
	int	i_set;

	i_set = -1;
	while (set[++i_set])
		if (set[i_set] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	i_s;
	size_t	i_end;
	size_t	i_new_s;

	i_s = 0;
	while (s1[i_s] && ft_is_set(s1[i_s], set))
		i_s++;
	i_end = ft_strlen(s1) - 1;
	while (i_end > i_s && ft_is_set(s1[i_end], set))
		i_end--;
	new_s = (char *)malloc(sizeof(char) * (i_end - i_s + 2));
	if (!(new_s))
		ft_error_malloc();
	if (!(s1[i_s]))
	{
		new_s[0] = 0;
		return (new_s);
	}
	i_new_s = -1;
	while (i_s <= i_end)
		new_s[++i_new_s] = s1[i_s++];
	new_s[i_new_s + 1] = 0;
	return (new_s);
}
