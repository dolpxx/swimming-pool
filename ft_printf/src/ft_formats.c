/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 05:22:44 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 05:24:20 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int result_length;

	result_length = 0;
	if (format == 'c')
		result_length += ft_printchar(va_arg(args, int));
	if (format == 's')
		result_length += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		result_length += ft_printptr(va_arg(args, uintptr_t));
	if (format == 'd' || format == 'i')
		result_length += ft_printdeci(va_arg(args, int));
	if (format == 'u')
		result_length += ft_printunsigned(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		result_length += ft_printhex(va_arg(args, unsigned int), format);
	if (format == '%')
		result_length += ft_printpercent();
	return (result_length);
}
