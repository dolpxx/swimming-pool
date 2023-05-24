/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:19:31 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:20:09 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (dst == NULL && src == NULL)
		return (NULL);
	ret = dst;
	while (n > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		n--;
	}
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	s[];
	char		d[];
	char		*r;
	char		*dn;
	char		*sn;

	s[] = "1234567890";
	d[] = "ABCDEFGHIJ";
	dn = NULL;
	sn = NULL;
	printf("org:%s\n", s);
	r = memcpy(d, s, 0);
	printf("0cpy\t:%s\n", r);
	r = ft_memcpy(d, s, 0);
	printf("0cpyft\t:%s\n", r);
	
	r = memcpy(d, s, 5);
	printf("5cpy\t:%s\n", r);
	r = ft_memcpy(d, s, 5);
	printf("5cpyft\t:%s\n", r);
	r = memcpy(dn, s, 5);
	printf("5cpy\t:%s\n", r);
	r = ft_memcpy(dn, s, 5);
	printf("5cpyft\t:%s\n", r);
	r = memcpy(d, sn, 5);
	printf("5cpy\t:%s\n", r);
	r = ft_memcpy(d, sn, 5);
	printf("5cpyft\t:%s\n", r);
	r = memcpy(dn, sn, 5);
	printf("5cpy\t:%s\n", r);
	r = ft_memcpy(dn, sn, 5);
	printf("5cpyft\t:%s\n", r);
}
*/
