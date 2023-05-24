/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:21:17 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:51:11 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
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
	printf("toupper\t\t:");
	c = 0x20;
	while(c <= 0x7e)
	{
		printf("%c",toupper(c));
		c++;
	}
	printf("\n");
	printf("ft_toupper\t:");
	c = 0x20;
	while(c <= 0x7e)
	{
		printf("%c",ft_toupper(c));
		c++;
	}
	printf("\n");
}
*/
