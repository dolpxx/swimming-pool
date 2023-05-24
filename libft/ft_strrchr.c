/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:24 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:24 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	len = ft_strlen(s);
	if (len == 0)
		return (NULL);
	s += (len - 1);
	while (len)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[];

	s[] = "The quick brown fox jumps over the lazy dog\0hidden term";
	printf("s\t\t:%s\n\n",s);
	printf("strrchr\t\tc='e'\ts=%s\n",strrchr(s, 'e'));
	printf("ft_strcht\tc='e'\ts=%s\n\n",ft_strrchr(s, 'e'));
	printf("strrchr\t\tc='\\0'\ts=%s\n",strrchr(s, '\0')+1);
	printf("ft_strcht\tc='\\0'\ts=%s\n\n",ft_strrchr(s, '\0')+1);
	printf("strrchr\t\tc='#'\ts=%s\n",strrchr(s, '#'));
	printf("ft_strrchr\tc='#'\ts=%s\n\n",ft_strrchr(s, '#'));
}
*/
