/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:52:49 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 21:03:04 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	void	*p;
	size_t	c;
	size_t	lsiz;

	lsiz = sizeof(size_t);
	p = b;
	c = (size_t)p % lsiz;
	while (c-- > 0 && len-- > 0)
		*(char *)p++ = 0;
	while (len >= lsiz)
	{
		*(size_t *)p = 0;
		p += lsiz;
		len -= lsiz;
	}
	while (len--)
		*(char *)p++ = 0;
	return (b);
}

/*
#include <stdint.h>
#include <stdio.h>
#include <strings.h>
#define MaxLen 35

int	main(void)
{
	char	s[MaxLen+1];
	char	sf[MaxLen+1];
	char	*r;
	char	*rf;
	int		l;
	int		i;

	l = 0;
	while(l<MaxLen)
	{
		s[l] = 9 - (l % 10) + '0';
		sf[l] = 9 - (l % 10) + '0';
		l++;
	}
	s[l] = '\0';
	sf[l] = '\0';
	printf("original\t:%s\n", s);
	printf("n=0\n");
//	printf(" bzero\t\t:%s\n",(char *)bzero(s, 0));
	printf(" ft_bzero\t:%s\n",(char *)ft_bzero(sf, 0));
	printf("n=5\n");
	r = bzero(s, 34);
	rf = ft_bzero(sf, 34);
	printf(" bzero\t\t:");
	l = MaxLen;
	i = 0;
	while (l)
	{
		printf("%02x ", s[i]);
		l--;
		i++;
	}
	printf("\n");
	printf(" ft_bzero\t:");
	l = MaxLen;
	i = 0;
	while (l)
	{
		printf("%02x ", sf[i]);
		l--;
		i++;
	}
	printf("\n");
//	bzero(s, SIZE_MAX);
//	ft_bzero(sf, SIZE_MAX);
}
*/
