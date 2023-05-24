/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:54 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:54 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rs;
	size_t	s1len;
	size_t	s2len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	rs = (char *)malloc(s1len + s2len + 1);
	if (rs == NULL)
		return (NULL);
	ft_memcpy(rs, s1, s1len);
	ft_strlcpy(rs + s1len, s2, s2len + 1);
	return (rs);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	s1[];
	char const	s10[];
	char const	s20[];
	char const	*n;
	char		*p;

	s1[] = "The quick brown fox ";
	char const	s2[]= "jumps over the lazy dog.";
	s10[] = "";
	s20[] = "";
	n = NULL;
	printf("*s1 = %s\t*s2 = %s\n", s1, s2);
	p = ft_strjoin(s1, s2);
	printf("ft: r = %s\n\n", p);
	printf("*s1 = %s\t*s2 = %s\n", s10, s2);
	p = ft_strjoin(s10, s2);
	printf("ft: r = %s\n\n", p);
	printf("*s1 = %s\t*s2 = %s\n", s1, s20);
	p = ft_strjoin(s1, s20);
	printf("ft: r = %s\n\n", p);
	printf("*s1 = %s\t*s2 = %s\n", n, s2);
	p = ft_strjoin(n, s2);
	printf("ft: r = %s\n\n", p);
	printf("*s1 = %s\t*s2 = %s\n", s1, n);
	p = ft_strjoin(s1, n);
	printf("ft: r = %s\n\n", p);
	printf("*s1 = %s\t*s2 = %s\n", n, n);
	p = ft_strjoin(n, n);
	printf("ft: r = %s\n\n", p);
}
*/
