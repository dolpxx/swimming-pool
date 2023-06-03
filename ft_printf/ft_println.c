/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_println.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:01:38 by jchris            #+#    #+#             */
/*   Updated: 2023/06/01 17:03:16 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_println(const char *str, ...)
{
	int		i;
	int		result_length;
	va_list	args;

	i = 0;
	result_length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			result_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			result_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	ft_printchar('\n');
	return (result_length + 1);
}
