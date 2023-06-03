/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 02:55:05 by jchris            #+#    #+#             */
/*   Updated: 2023/05/30 18:29:37 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(const char *str)
{
	int	i;

	if (str == NULL)
		return (ft_printstr("(null)"));
	i = 0;
	while (str[i] != '\0')
		ft_printchar(str[i++]);
	return (i);
}
