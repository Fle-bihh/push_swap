/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:38:20 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:21:00 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long int n)
{
	size_t		size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		i_res;
	long int	nbr;

	nbr = (long int)n;
	i_res = ft_size(nbr);
	res = (char *)malloc(sizeof(char) * i_res + 1);
	if (!(res))
		ft_error_malloc();
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	res[i_res] = 0;
	if (nbr == 0)
		res[0] = '0';
	while (nbr > 0)
	{
		res[--i_res] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (res);
}
