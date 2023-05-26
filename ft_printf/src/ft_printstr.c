/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:55:05 by jchris            #+#    #+#             */
/*   Updated: 2023/05/27 02:55:47 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
