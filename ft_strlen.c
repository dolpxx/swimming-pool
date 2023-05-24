/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:39:34 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:39:34 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
		p++;
	return (p - s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	z[];
	const char	t[];
	const char	l[];

	z[] = "";
	t[] = "123";
	l[] = "abcdefghijklmnopqrstuvwxyz";
	printf("test str = %s length = %lu:%lu\n", z, strlen (z), ft_strlen (z));
	printf("test str = %s length = %lu:%lu\n", t, strlen (t), ft_strlen (t));
	printf("test str = %s length = %lu:%lu\n", l, strlen (l), ft_strlen (l));
}
*/
