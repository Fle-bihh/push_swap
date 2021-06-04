/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:36:00 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 11:01:59 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	res;
	long int	sign;
	int			i_str;

	res = 0;
	sign = 1;
	i_str = 0;
	while ((str[i_str] >= 9 && str[i_str] <= 13) || (str[i_str] == 32))
		i_str++;
	if (str[i_str] == '-' || str[i_str] == '+')
	{
		if (str[i_str] == '-')
			sign = -1;
		i_str++;
	}
	while (str[i_str] >= '0' && str[i_str] <= '9')
	{
		res = res * 10 + str[i_str] - '0';
		i_str++;
	}
	return (res * sign);
}
