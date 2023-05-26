/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:17:23 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 01:46:10 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int		g_deci;
static int		g_hex;

int	ft_printchar(const char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(const char *str)
{
	unsigned int	i;

	if (str == NULL)
		return ((int)write(1, "(null)", 6));
	i = 0;
	while (str[i] != '\0')
		ft_printchar(str[i++]);
	return ((int)i);
}

unsigned int	ft_decidigit(int nb)
{
	unsigned int	res;


	res = 0;
	if (nb < 0)
		return (ft_decidigit(-nb) + 1);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

int	ft_printdeci(int nb)
{
	if (nb == INT_MIN)
		return (ft_printstr("-2147483648"));
	if (g_deci == 0)
	{
		if (nb < 0)
		{
			ft_printchar('-');
			return (ft_printdeci(-nb) + 1);
		}
		g_deci = ft_decidigit(nb);
	}
	while (TRUE)
	{
		if (nb >= 10)
		{
			ft_printdeci(nb / 10);
			nb %= 10;
		}
		else
		{
			ft_printchar(nb + '0');
			return (g_deci);
		}
	}
}

unsigned int	ft_hexdigit(int nb)
{
	unsigned int	res;

	res = 0;
	if (nb < 0)
		return (ft_hexdigit(-nb) + 1);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		res++;
	}
	return (res);
}

int	ft_printhex(int nb, char format)
{
	if (nb == INT_MIN)
		return ((int)write(1, "-0x80000000", 11));
	if (g_hex == 0)
	{
		if (nb < 0)
		{
			return (ft_printhex(~nb + 1, format));
		}
		g_hex += ft_hexdigit(nb);
	}
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

int	main(void)
{
	int	p;

	p = ft_printdeci('a');
	printf("\n%d\n", p);
}
