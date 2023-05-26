/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 03:45:07 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 03:52:45 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_digit(unsigned int nb);
static int	g_unsigned;

int	ft_printunsigned(unsigned int nb)
{
	if (g_unsigned == 0)
		g_unsigned = ft_unsigned_digit(nb);
	while (TRUE)
	{
		if (nb >= 10)
		{
			ft_printunsigned(nb / 10);
			nb %= 10;
		}
		else
		{
			ft_printchar(nb + '0');
			return (g_unsigned);
		}
	}
}

static int	ft_unsigned_digit(unsigned int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	res = 0;
	while (nb > 0)
	{
		nb /= 10;
		res++;
	}
	return (res);
}
