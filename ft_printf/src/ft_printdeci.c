/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdeci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:56:22 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 03:03:19 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_decidigit(int nb);
static int	g_deci;

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

static int	ft_decidigit(int nb)
{
	int	res;

	if (nb == INT_MIN)
		return (11);
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
