/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:21:02 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:21:02 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*r;

	r = dst;
	if (dst == src)
		return (r);
	if (dst < src)
		while (len--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	else
	{
		src += len - 1;
		dst += len - 1;
		while (len--)
			*(unsigned char *)dst-- = *(unsigned char *)src--;
	}
	return (r);
}
/*
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	org[];
	char		buf[100];
	char		*src;
	char		*dst;
	void		*r;
	int			i;

	org[] = "12345_ABC_67890";
	strcpy(buf, org);
	printf("mem\t: %s\n\n",buf);
	i = 0;
	printf("[len=0]\n");
	r = memmove(buf, src, 0);
	printf(" memmove\t:%s\n",r);
	r = ft_memmove(buf, src, 0);
	printf(" ft_memmove\t:%s\n",r);
	printf("[len=5 offset 0-10]\n");
	while (i <= 10)
	{
		strcpy(buf, org);
		dst = buf + i;
		src = buf + 5;
		printf("offset dst=%d src=%d\n",i ,5);
		r = memmove(dst, src, 5);
		printf(" memmove\tbuf:%s dst\t:%s\n", buf, dst);
		strcpy(buf, org);
		dst = buf + i;
		src = buf + 5;
		r = ft_memmove(dst, src, 5);
		printf(" ft_memmove\tbuf:%s dst\t:%s\n\n", buf, dst);
		i++;
	}
	strcpy(buf, org);
	dst = buf + 5;
	src = buf;
//	r = memmove(dst, src, SIZE_MAX);
	strcpy(buf, org);
	dst = buf + 5;
	src = buf;
//	r = ft_memmove(dst, src, SIZE_MAX);
}
*/
