/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:22:54 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:34:46 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rs;

	if (s == NULL)
		return (NULL);
	if (len != 0)
	{
		if (ft_strlen(s) < start)
			len = 0;
		else if ((ft_strlen(s) - start) < len)
			len = ft_strlen(s) - start;
	}
	rs = (char *)malloc(len + 1);
	if (rs == NULL)
		return (NULL);
	if (len == 0)
		*rs = '\0';
	else
		ft_strlcpy(rs, s + start, len + 1);
	return (rs);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			ss[];
	unsigned int	start;
	size_t			len;
	char			*nullstr;

	ss[] = "The quick brown fox jumps over the lazy dog.";
	nullstr = NULL;
	printf("*s = %s\n", ss);
	printf("*s len = %lu\n\n", strlen(ss));
	start = 0;
	len = 43;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	start = 0;
	len = 44;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	start = 0;
	len = 45;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	start = 10;
	len = 9;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	start = 10;
	len = 0;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	start = 1024;
	len = 10;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(ss, start, len));
	printf("\n*s = %s\n", nullstr);
	start = 0;
	len = 43;
	printf("start =%d\tlen=%zu\tsubstr=%s\n", start, len, \
	ft_substr(nullstr, start, len));
}
*/
