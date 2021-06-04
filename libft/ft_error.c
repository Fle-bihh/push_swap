/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-biha <fle-biha@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:12:20 by fle-biha          #+#    #+#             */
/*   Updated: 2021/05/28 10:13:22 by fle-biha         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(0);
}

void	ft_error_malloc(void)
{
	ft_putstr_fd("Error malloc\n", 1);
	exit(0);
}
