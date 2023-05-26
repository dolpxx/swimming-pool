/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:57:23 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 04:07:26 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_digit(unsigned int nb);
static int	g_hex;

int	ft_printhex(unsigned int nb, const char format)
{
	if (g_hex == 0)
		g_hex = ft_hex_digit(nb);
	while (TRUE)
	{
		if (nb >= 16)
		{
			ft_printhex(nb / 16, format);
			nb %= 16;
		}
		else
		{
			if (format == 'x')
				ft_printchar("0123456789abcdef"[nb]);
			else if (format == 'X')
				ft_printchar("0123456789ABCDEF"[nb]);
			return (g_hex);
		}
	}
}

static int	ft_hex_digit(unsigned int nb)
{
	static int	res;

	if (nb == 0)
		return (1);
	res = 0;
	while (nb > 0)
	{
		nb /= 16;
		res++;
	}
	return (res);
}
