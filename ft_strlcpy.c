/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:47 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:47 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = 0;
	if (dstsize != 0)
	{
		while (dstsize)
		{
			*(dst + slen) = *(src + slen);
			if (*(src + slen) == '\0')
				break ;
			slen++;
			dstsize--;
		}
		if (dstsize == 0)
			*(dst + slen - 1) = '\0';
	}
	while (*(src + slen) != '\0')
		slen++;
	return (slen);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		d[100];
	char		fd[100];
	const char	s[];
	size_t		r;

	s[] = "1234567890";
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	fd[0] = 'T';
	fd[1] = 'E';
	fd[2] = 'S';
	fd[3] = 'T';
	fd[4] = '\0';
	printf("[size=0]\n");
	r = strlcpy(d, s, 0);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 0);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
	printf("[size=1]\n");
	r = strlcpy(d, s, 1);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 1);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
	printf("[size=5]\n");
	r = strlcpy(d, s, 5);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 5);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
	printf("[size=10]\n");
	r = strlcpy(d, s, 10);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 10);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
	printf("[size=11]\n");
	r = strlcpy(d, s, 11);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 11);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
	printf("[size=15]\n");
	r = strlcpy(d, s, 15);
	printf(" strlcpy\tret\t:%zu dst\t:%s\n", r, d);
	r = ft_strlcpy(fd, s, 15);
	printf(" ft_strlcpy\tret\t:%zu dst\t:%s\n", r, fd);
}
*/
