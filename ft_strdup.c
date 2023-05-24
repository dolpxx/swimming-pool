/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:39:24 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 22:45:51 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*p;

	len = ft_strlen(s1);
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, len + 1);
	return ((char *)p);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[];
	char	str2[];
	char	*nullptr;
	char	*p;
	char	*ls;
	size_t	lslen;
	size_t	i;

	str1[] = "The quick brown fox jumps over the lazy dog.";
	str2[] = "";
	nullptr = NULL;
	printf("str = %s\n", str1);
	p = strdup(str1);
	printf("st: adr = %p\n", p);
	printf("st: r = %s\n", p);
	free(p);
	p = ft_strdup(str1);
	printf("ft: adr = %p\n", p);
	printf("ft: r = %s\n", p);
	free(p);
	printf("\nstr = %s\n", str2);
	p = strdup(str2);
	printf("st: adr = %p\n", p);
	printf("st: r = %s\n", p);
	free(p);
	p = ft_strdup(str2);
	printf("ft: adr = %p\n", p);
	printf("ft: r = %s\n", p);
	free(p);
	lslen = 4096 * (size_t)1048576;
	ls = calloc(1, lslen);
	i = 0;
	while(i < lslen - 1)
	{
		ls[i] = 'A';
		i++;
	}
	ls[lslen -2] = 'B';
	printf("\nlongstr[%lu] = %c\n", lslen -2, ls[lslen -2]);
	p = strdup(ls);
	printf("st: adr = %p\n", p);
	printf("st: longstr[%lu] = %c\n", lslen -2, p[lslen -2]);
	free(p);
	p = ft_strdup(ls);
	printf("ft: adr = %p\n", p);
	printf("ft: longstr[%lu] = %c\n", lslen -2, p[lslen -2]);
	printf("\nstr = %s\n", nullptr);
	free(p);
	p = strdup(nullptr);
	printf("st: adr = %p\n", p);
	printf("st: r = %s\n", p);
	free(p);
	p = ft_strdup(nullptr);
	printf("ft: adr = %p\n", p);
	printf("ft: r = %s\n", p);
	free(p);
}
*/
