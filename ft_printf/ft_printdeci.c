/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdeci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:56:22 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 22:33:28 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_deci_digit(unsigned int nb);

int	ft_printdeci(int nb)
{
	int	res_deci;

	res_deci = ft_deci_digit(nb);
	if (nb == INT_MIN)
		return (ft_printstr("-2147483648"));
	if (nb < 0)
	{
		ft_printchar('-');
		return (ft_printdeci(-nb) + 1);
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
			ft_printchar("0123456789"[nb]);
			return (res_deci);
		}
	}
}

static int	ft_deci_digit(unsigned int nb)
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_deci_digit(1020305));
// }
