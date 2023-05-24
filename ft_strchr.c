/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:37:30 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:37:36 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
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
	printf("strchr\t\tc='b'\ts=%s\n",strchr(s, 'b'));
	printf("ft_strcht\tc='b'\ts=%s\n\n",ft_strchr(s, 'b'));
	printf("strchr\t\tc='\\0'\ts=%s\n",strchr(s, '\0')+1);
	printf("ft_strcht\tc='\\0'\ts=%s\n\n",ft_strchr(s, '\0')+1);
	printf("strchr\t\tc='#'\ts=%s\n",strchr(s, '#'));
	printf("ft_strchr\tc='#'\ts=%s\n\n",ft_strchr(s, '#'));
}
*/
