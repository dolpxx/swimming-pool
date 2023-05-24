/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:21:57 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:49:03 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c += 32;
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	printf("org\t\t:");
	c = 0x20;
	while(c <= 0x7e)
	{
		printf("%c",c);
		c++;
	}
	printf("\n");
	printf("tolower\t\t:");
	c = 0x20;
	while(c <= 0x7e)
	{
		printf("%c",tolower(c));
		c++;
	}
	printf("\n");
	printf("ft_toupper\t:");
	c = 0x20;
	while(c <= 0x7e)
	{
		printf("%c",ft_tolower(c));
		c++;
	}
	printf("\n");
}
*/
