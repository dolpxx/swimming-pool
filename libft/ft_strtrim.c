/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:19 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:19 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		mtchchr(char c, char const *set);
static size_t	fwsrch(char const *s1, char const *set);
static size_t	bksrch(char const *s1, char const *set);
static char		*strtomem(char const *s1, size_t ofset, size_t len);

static size_t	fwsrch(char const *s1, char const *set)
{
	size_t	len;
	size_t	idx;

	idx = 0;
	len = ft_strlen(s1);
	while (len-- && mtchchr(*s1++, set))
		idx++;
	return (idx);
}

static size_t	bksrch(char const *s1, char const *set)
{
	size_t	len;
	size_t	idx;

	len = ft_strlen(s1);
	idx = len;
	s1 += idx - 1;
	while (len-- && mtchchr(*s1--, set))
		idx--;
	return (idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	top;
	size_t	til;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
	{
		len = ft_strlen(s1);
		return (strtomem(s1, 0, len));
	}
	top = fwsrch(s1, set);
	til = bksrch(s1, set);
	if (top > til)
		len = 0;
	else
		len = til - top;
	return (strtomem(s1, top, len));
}

static char	*strtomem(char const *s1, size_t ofset, size_t len)
{
	char	*ms;

	ms = (char *)malloc(len + 1);
	if (ms == NULL)
		return (NULL);
	ft_strlcpy(ms, s1 + ofset, len + 1);
	return (ms);
}

static int	mtchchr(char c, char const *set)
{
	size_t	setlen;
	int		mf;

	setlen = ft_strlen(set);
	mf = 0;
	while (setlen--)
	{
		if (c == *set++)
		{
			mf = 1;
			break ;
		}
	}
	return (mf);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	s1[];
	const char	s2[];
	const char	s3[];
	const char	t1[];
	const char	t2[];
	const char	t3[];
	const char	*nullstr;

	s1[] = "1234567123";
	s2[] = " \t\n|1234\t5678|\t\n";
	s3[] = "";
	t1[] = " 123";
	t2[] = " \t\n|";
	t3[] = "";
	nullstr = NULL;
	
	printf("*s1 = %s\ttrim = %s \n", s1, t1);
	printf("ft: r = %s\n\n", ft_strtrim(s1, t1));
	
	printf("*s1 = %s\ttrim = %s\n", s2, t2);
	printf("ft: r = %s\n\n", ft_strtrim(s2, t2));
	printf("*s1 = %s\ttrim = %s\n", s3, t1);
	printf("ft: r = %s\n\n", ft_strtrim(s3, t1));
	printf("*s1 = %s\ttrim = %s\n", s1, t3);
	printf("ft: r = %s\n\n", ft_strtrim(s1, t3));
	printf("*s1 = %s\ttrim = %s\n", s3, t3);
	printf("ft: r = %s\n\n", ft_strtrim(s3, t3));
	printf("*s1 = %s\ttrim = %s\n", nullstr, t1);
	printf("ft: r = %s\n\n", ft_strtrim(nullstr, t1));
	printf("*s1 = %s\ttrim = %s\n", s1, nullstr);
	printf("ft: r = %s\n\n", ft_strtrim(s1, nullstr));
	printf("*s1 = %s\ttrim = %s\n", nullstr, nullstr);
	printf("ft: r = %s\n\n", ft_strtrim(nullstr, nullstr));
}
*/
