/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:04:42 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/25 15:07:36 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;
	size_t	i_tmp;

	i_tmp = 0;
	tmp = (char *)s;
	while (i_tmp < n)
		tmp[i_tmp++] = 0;
}
