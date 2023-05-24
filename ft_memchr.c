/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:17:30 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:17:33 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	src[];
	int			c;
	int			nc;

	src[] = "The quick brown fox jumps over the lazy dog.";
	c = 'b';
	nc = '1';
	printf("src=\t%s\n", src);
	printf("n=%d\tc=%c\tresult=\t%s\n", 0, c, ft_memchr(src, c, 0));
	printf("n=%d\tc=%c\tresult=\t%s\n", 20, c, ft_memchr(src, c, 20));
	printf("n=%d\tc=%c\tresult=\t%s\n", 20, nc, ft_memchr(src, nc, 20));
}
*/
