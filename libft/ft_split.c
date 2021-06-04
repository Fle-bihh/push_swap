/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:54:45 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:22:05 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_w(char const *s, char set)
{
	size_t	count_w;
	int		i_s;

	if (!s)
		return (0);
	count_w = 0;
	i_s = 0;
	while (s[i_s])
	{
		while (s[i_s] && s[i_s] == set)
			i_s++;
		if (s[i_s] != '\0')
			count_w++;
		while (s[i_s] && s[i_s] != set)
			i_s++;
	}
	return (count_w);
}

char	**ft_split(char const *s, char set)
{
	char	**new_s;
	size_t	i_new_s;
	size_t	nbr_w;
	char	*tmp_s;

	i_new_s = -1;
	if (!s)
		return (0);
	nbr_w = ft_count_w(s, set);
	new_s = ft_calloc(sizeof(char *), nbr_w + 1);
	if (!(new_s))
		ft_error_malloc();
	while (++i_new_s < nbr_w)
	{
		while (*s == set)
			s++;
		tmp_s = ft_strchr(s, set);
		if (!ft_strchr(s, set))
			tmp_s = ft_strchr(s, '\0');
		new_s[i_new_s] = ft_substr(s, 0, tmp_s - s);
		s = tmp_s;
	}
	return (new_s);
}
