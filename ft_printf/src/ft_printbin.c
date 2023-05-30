/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:08:45 by jchris            #+#    #+#             */
/*   Updated: 2023/05/30 18:14:17 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_bin_digit(unsigned int nb);

int	ft_printbin(unsigned int nb)
{
	int	res_bin;

	res_bin = ft_bin_digit(nb);
	while (TRUE)
	{
		if (nb >= 2)
		{
			ft_printbin(nb / 2);
			nb %= 2;
		}
		else
		{
			ft_printchar("01"[nb]);
			return (res_bin);
		}
	}
}

static int	ft_bin_digit(unsigned int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	res = 0;
	while (nb > 0)
	{
		nb /= 2;
		res++;
	}
	return (res);
}
