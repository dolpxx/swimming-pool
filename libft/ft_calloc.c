/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:10:51 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:10:51 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*p;

	if (size != 0)
	{
		if (count > SIZE_MAX / size)
			return (NULL);
	}
	len = count * size;
	if (len == 0)
		len = 1;
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, len);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	void	*p;
	size_t	st;

	printf("SIZE_MAX = %lu\n", SIZE_MAX);
	printf("\ncnt = 1024, size = 1024, len = %lu\n", (size_t)1024 * 1024);
	p = calloc(1024, 1024);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(1024, 1024);
	printf("ft: r = %p\n", p);
	free(p);
	st = 4096 * (size_t)1048576;
	printf("\ncnt = 4096, size = 1048576, len = %lu\n", st);
	p = calloc(4096, 1048576);
	printf("st: r = %p\n", p);
	printf("st: inival = %02x\n", *(unsigned char *)(p + st -1));
	*(unsigned char *)(p + st -1) = 0x42;
	printf("st: setval = %02x\n", *(unsigned char *)(p + st -1));
	free(p);
	p = ft_calloc(4096, 1048576);
	printf("ft: r = %p\n", p);
	printf("ft: inival = %02x\n", *(unsigned char *)(p + st -1));
	*(unsigned char *)(p + st -1) = 0x42;
	printf("ft: setval = %02x\n", *(unsigned char *)(p + st -1));
	free(p);
	st = 8192 * (size_t)1048576;
	printf("\ncnt = 8192, size = 1048576, len = %lu\n", st);
	p = calloc(8192, 1048576);
	printf("st: r = %p\n", p);
	printf("st: inival = %02x\n", *(unsigned char *)(p + st -1));
	*(unsigned char *)(p + st -1) = 0x42;
	printf("st: setval = %02x\n", *(unsigned char *)(p + st -1));
	free(p);
	p = ft_calloc(8192, 1048576);
	printf("ft: r = %p\n", p);
	printf("ft: inival = %02x\n", *(unsigned char *)(p + st -1));
	*(unsigned char *)(p + st -1) = 0x42;
	printf("ft: setval = %02x\n", *(unsigned char *)(p + st -1));
	free(p);
	
	printf("\ncnt = 0, size = 0, len = %lu\n", (size_t)0 * 0);
	p = calloc(0, 0);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(0, 0);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = 0, size = SIZE_MAX, len = %lu\n", (size_t)0 * SIZE_MAX);
	p = calloc(0, SIZE_MAX);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(0, SIZE_MAX);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = SIZE_MAX, size = 0, len = %lu\n", (size_t)SIZE_MAX * 0);
	p = calloc(SIZE_MAX, 0);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(SIZE_MAX, 0);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = 1, size = SIZE_MAX, len = %lu\n", (size_t)1 * SIZE_MAX);
	p = calloc(1, SIZE_MAX);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(1, SIZE_MAX);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = SIZE_MAX, size = 1, len = %lu\n", (size_t)SIZE_MAX * 1);
	p = calloc(SIZE_MAX, 1);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(SIZE_MAX, 1);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = 2, size = SIZE_MAX, len = %llu\n", \
			(unsigned long long int)2 * SIZE_MAX);
	p = calloc(2, SIZE_MAX);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(2, SIZE_MAX);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = 2, size = SIZE_MAX, len = %llu\n", \
			(unsigned long long int)2 * SIZE_MAX);
	p = calloc(2, SIZE_MAX);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(2, SIZE_MAX);
	printf("ft: r = %p\n", p);
	free(p);
	printf("\ncnt = SIZE_MAX, size = SIZE_MAX, len = %llu\n", \
			(unsigned long long int)SIZE_MAX * SIZE_MAX);
	p = calloc(SIZE_MAX, SIZE_MAX);
	printf("st: r = %p\n", p);
	free(p);
	p = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("ft: r = %p\n", p);
	free(p);
}
*/
