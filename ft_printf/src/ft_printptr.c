/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 04:01:13 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 05:41:07 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digitptr(uintptr_t nb);
static void	ft_putptr(uintptr_t nb);

int	ft_printptr(uintptr_t nb)
{
	write(1, "0x", 2);
	ft_putptr(nb);
	return (ft_digitptr(nb));
}

static int	ft_digitptr(uintptr_t nb)
{
	int	res;

	if (nb == 0)
		return (3);
	res = 2;
	while (nb > 0)
	{
		nb /= 16;
		res++;
	}
	return (res);
}

static void	ft_putptr(uintptr_t nb)
{
	while (TRUE)
	{
		if (nb >= 16)
		{
			ft_putptr(nb / 16);
			nb %= 16;
		}
		else
		{
			ft_printhex(nb, 'x');
			return ;
		}
	}
}
