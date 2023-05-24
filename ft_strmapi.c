/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:40 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 23:21:06 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ms;
	size_t	idx;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	ms = (char *)malloc(len + 1);
	if (ms == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		ms[idx] = (*f)((unsigned int)idx, s[idx]);
		idx++;
	}
	ms[idx] = '\0';
	return (ms);
}

// #include <stdio.h>

// static char	mytoupper(unsigned int i, char c);

// int	main(void)
// {
// 	char const	s[] = "abcdefg";
// 	printf("str=%s\n", s);
// 	printf("r=%s\n", ft_strmapi(s, mytoupper));
// }

// static char	mytoupper(unsigned int i, char c)
// {
// 	if (i % 2 == 1 && c >= 'a' && c <= 'z')
// 	{
// 		c -= 0x20;
// 	}
// 	return (c);
// }
