/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:51 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:51 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	ret;
	size_t	idx;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize - 1 < dstlen)
		return (dstsize + srclen);
	ret = dstlen + srclen;
	idx = dstlen;
	while (idx + 1 < dstsize)
	{
		*(dst + idx) = *src;
		if (*src == '\0')
			break ;
		idx++;
		src++;
	}
	*(dst + idx) = '\0';
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		d[100];
	char		df[100];
	const char	s[];
	const char	s0[];
	size_t		r;
char	dst1[20];
char	dst2[20];
int		ret1;
int		ret2;

	s[] = "1234567890";
	s0[] = "";
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 0);
	printf("strlcat\t\t:ds=0 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 0);
	printf("ft_strlcat\t:ds=0 r:%zu d:%s\n\n", r, df);
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 4);
	printf("strlcat\t\t:ds=4 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 4);
	printf("ft_strlcat\t:ds=4 r:%zu d:%s\n\n", r, df);
	
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 5);
	printf("strlcat\t\t:ds=5 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 5);
	printf("ft_strlcat\t:ds=5 r:%zu d:%s\n\n", r, df);
	
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 10);
	printf("strlcat\t\t:ds=10 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 10);
	printf("ft_strlcat\t:ds=10 r:%zu d:%s\n\n", r, df);
	
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 11);
	printf("strlcat\t\t:ds=11 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 11);
	printf("ft_strlcat\t:ds=11 r:%zu d:%s\n\n", r, df);
	
	d[0] = 'T';
	d[1] = 'E';
	d[2] = 'S';
	d[3] = 'T';
	d[4] = '\0';
	df[0] = 'T';
	df[1] = 'E';
	df[2] = 'S';
	df[3] = 'T';
	df[4] = '\0';
	r = (size_t)strlcat(d, s, 15);
	printf("strlcat\t\t:ds=15 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 15);
	printf("ft_strlcat\t:ds=15 r:%zu d:%s\n\n", r, df);
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 0);
	printf("strlcat\t\t:ds=0 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 0);
	printf("ft_strlcat\t:ds=0 r:%zu d:%s\n\n", r, df);
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 4);
	printf("strlcat\t\t:ds=4 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 4);
	printf("ft_strlcat\t:ds=4 r:%zu d:%s\n\n", r, df);
	
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 5);
	printf("strlcat\t\t:ds=5 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 5);
	printf("ft_strlcat\t:ds=5 r:%zu d:%s\n\n", r, df);
	
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 10);
	printf("strlcat\t\t:ds=10 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 10);
	printf("ft_strlcat\t:ds=10 r:%zu d:%s\n\n", r, df);
	
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 11);
	printf("strlcat\t\t:ds=11 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 11);
	printf("ft_strlcat\t:ds=11 r:%zu d:%s\n\n", r, df);
	
	d[0] = '\0';
	df[0] = '\0';
	r = (size_t)strlcat(d, s, 15);
	printf("strlcat\t\t:ds=15 r:%zu d:%s\n", r, d);
	r = ft_strlcat(df, s, 15);
	printf("ft_strlcat\t:ds=15 r:%zu d:%s\n\n", r, df);
	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 0);
 	printf("strlcat\t\t:ds=0 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 0);
 	printf("ft_strlcat\t:ds=0 r:%zu d:%s\n\n", r, df);
 
 	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 4);
 	printf("strlcat\t\t:ds=4 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 4);
 	printf("ft_strlcat\t:ds=4 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 5);
 	printf("strlcat\t\t:ds=5 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 5);
 	printf("ft_strlcat\t:ds=5 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 10);
 	printf("strlcat\t\t:ds=10 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 10);
 	printf("ft_strlcat\t:ds=10 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 11);
 	printf("strlcat\t\t:ds=11 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 11);
 	printf("ft_strlcat\t:ds=11 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = 'T';
 	d[1] = 'E';
 	d[2] = 'S';
 	d[3] = 'T';
 	d[4] = '\0';
 	df[0] = 'T';
 	df[1] = 'E';
 	df[2] = 'S';
 	df[3] = 'T';
 	df[4] = '\0';
 	r = (size_t)strlcat(d, s0, 15);
 	printf("strlcat\t\t:ds=15 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 15);
 	printf("ft_strlcat\t:ds=15 r:%zu d:%s\n\n", r, df);
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 0);
 	printf("strlcat\t\t:ds=0 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 0);
 	printf("ft_strlcat\t:ds=0 r:%zu d:%s\n\n", r, df);
 
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 4);
 	printf("strlcat\t\t:ds=4 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 4);
 	printf("ft_strlcat\t:ds=4 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 5);
 	printf("strlcat\t\t:ds=5 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 5);
 	printf("ft_strlcat\t:ds=5 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 10);
 	printf("strlcat\t\t:ds=10 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 10);
 	printf("ft_strlcat\t:ds=10 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 11);
 	printf("strlcat\t\t:ds=11 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 11);
 	printf("ft_strlcat\t:ds=11 r:%zu d:%s\n\n", r, df);
 	
 	d[0] = '\0';
 	df[0] = '\0';
 	r = (size_t)strlcat(d, s0, 15);
 	printf("strlcat\t\t:ds=15 r:%zu d:%s\n", r, d);
 	r = ft_strlcat(df, s0, 15);
 	printf("ft_strlcat\t:ds=15 r:%zu d:%s\n\n", r, df);
char	*src = "aaa";
	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));
	strlcat(dst1, src, 20);
	strlcat(dst1, src, 20);
	ret1 = strlcat(dst1, src, 20);
	printf("strlcat\t\t:ds=20 r:%d d:%s\n", ret1, dst1);
	ft_strlcat(dst2, src, 20);
	ft_strlcat(dst2, src, 20);
	ret2 = ft_strlcat(dst2, src, 20);
	printf("ft_strlcat\t:ds=20 r:%d d:%s\n\n", ret2, dst2);
//char    *str = "the cake is a lie !\0I'm hidden lol\r\n";
//char    buff1[0xF00] = "there is no stars in the sky";
//char    buff2[0xF00] = "there is no stars in the sky";
char	*str = "1234567890123456789\012345678901234\r\n";
char	buff1[0xF00] = "1111111111222222222212345678";
char	buff2[0xF00] = "1111111111222222222212345678";
size_t	max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
size_t	r1 = strlcat(buff1, str, max);
size_t	r2 = ft_strlcat(buff2, str, max);
	printf("retvalue stlcat:%zu ft_strlcat:%zu\n",r1,r2);
char	s1[4] = "";
char	s2[4] = "";
r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("retvalue stlcat:%zu ft_strlcat:%zu\n",r1,r2);
}
*/
