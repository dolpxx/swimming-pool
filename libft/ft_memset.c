/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:23:04 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:23:04 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	uc;

	uc = (unsigned char)c;
	p = (unsigned char *)b;
	while (len--)
		*p++ = uc;
	return (b);
}
/*
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define MaxLen 40

int	main(void)
{
	char	s[MaxLen+1];
	int		l;
	int		c;
	size_t	len;

	l = 0;
	while(l<MaxLen)
	{
		s[l] = 9 - (l % 10) + '0';
		l++;
	}
	s[MaxLen] = '\0';
	printf("org\t:%s\n",s);
	c = '1';
	len = 3;
	printf("[len=%zu c=%c]\n", len, c);
	printf(" memset\t\t:%s\n", memset(s,c,len));
	printf(" ft_memset\t:%s\n", ft_memset(s,c,len));
	c = '2';
	len = 39;
	printf("[len=%zu c=%c]\n", len, c);
	printf(" memset\t\t:%s\n", memset(s,c,len));
	printf(" ft_memset\t:%s\n", ft_memset(s,c,len));
	c = '3';
	len = 40;
	printf("[len=%zu c=%c]\n", len, c);
	printf(" memset\t\t:%s\n", memset(s,c,len));
	printf(" ft_memset\t:%s\n", ft_memset(s,c,len));
	c = '4';
	len = 41;
	printf("[len=%zu c=%c]\n", len, c);
	printf(" memset\t\t:%s\n", memset(s,c,len));
	printf(" ft_memset\t:%s\n", ft_memset(s,c,len));
	c = '5';
	len = SIZE_MAX;
	printf("[len=%zu c=%c]\n", len, c);
//	printf(" memset\t\t:%s\n", memset(s,c,len));
	printf(" ft_memset\t:%s\n", ft_memset(s,c,len));
}
*/
