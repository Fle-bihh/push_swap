/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:02:12 by fle-biha          #+#    #+#             */
/*   Updated: 2020/11/29 15:38:09 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i_s;
	char	*new_s;

	if (!(new_s = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	i_s = -1;
	while (s[++i_s])
		new_s[i_s] = (*f)(i_s, s[i_s]);
	new_s[i_s] = 0;
	return (new_s);
}
