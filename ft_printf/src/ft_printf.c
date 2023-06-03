/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 05:18:00 by jchris            #+#    #+#             */
/*   Updated: 2023/06/03 22:53:32 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result_length;
	va_list	args;

	if (str == NULL)
	{
		ft_printf("");
		return (0);
	}
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
	return (result_length);
}
