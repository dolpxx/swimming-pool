/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:19:19 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:19:20 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n > 0)
	{
		c1 = *(unsigned char *)s1;
		c2 = *(unsigned char *)s2;
		if (c1 == c2)
		{
			s1++;
			s2++;
			n--;
		}
		else
			return (c1 - c2);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	ts8E1[];
	const char	ts8E2[];
	const char	ts8S1[];
	const char	ts8S2[];
	const char	ts8L1[];
	const char	ts8L2[];
	const char	ts8Z1[];
	const char	ts8Z2[];

	ts8E1[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8E2[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8S1[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8S2[] = "abcdefgHijklmnopqrstuvwxyz\0ABC";
	ts8L1[] = "abcdefgHijklmnopqrstuvwxyz\0ABC";
	ts8L2[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8Z1[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8Z2[] = "abcdefghijklmnopqrstuvwxyz\0abc";
	printf("[s1 == s2]\ns1:%s\ns2:%s\n", ts8E1, ts8E2);
	printf("memcmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			memcmp(ts8E1, ts8E2, 0),\
			memcmp(ts8E1, ts8E2, 5),\
			memcmp(ts8E1, ts8E2, 8),\
			memcmp(ts8E1, ts8E2, 26),\
			memcmp(ts8E1, ts8E2, 27),\
			memcmp(ts8E1, ts8E2, 28));
	printf("ft_memcmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_memcmp(ts8E1, ts8E2, 0),\
			ft_memcmp(ts8E1, ts8E2, 5),\
			ft_memcmp(ts8E1, ts8E2, 8),\
			ft_memcmp(ts8E1, ts8E2, 26),\
			ft_memcmp(ts8E1, ts8E2, 27),\
			ft_memcmp(ts8E1, ts8E2, 28));
	printf("[s1 < s2]\ns1:%s\ns2:%s\n", ts8S1, ts8S2);
	printf("memcmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			memcmp(ts8S1, ts8S2, 0),\
			memcmp(ts8S1, ts8S2, 5),\
			memcmp(ts8S1, ts8S2, 8),\
			memcmp(ts8S1, ts8S2, 26),\
			memcmp(ts8S1, ts8S2, 27),\
			memcmp(ts8S1, ts8S2, 28));
	printf("ft_memcmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_memcmp(ts8S1, ts8S2, 0),\
			ft_memcmp(ts8S1, ts8S2, 5),\
			ft_memcmp(ts8S1, ts8S2, 8),\
			ft_memcmp(ts8S1, ts8S2, 26),\
			ft_memcmp(ts8S1, ts8S2, 27),\
			ft_memcmp(ts8S1, ts8S2, 28));
	printf("[s1 > s2]\ns1:%s\ns2:%s\n", ts8L1, ts8L2);
	printf("memcmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			memcmp(ts8L1, ts8L2, 0),\
			memcmp(ts8L1, ts8L2, 5),\
			memcmp(ts8L1, ts8L2, 8),\
			memcmp(ts8L1, ts8L2, 26),\
			memcmp(ts8L1, ts8L2, 27),\
			memcmp(ts8L1, ts8L2, 28));
	printf("ft_memcmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_memcmp(ts8L1, ts8L2, 0),\
			ft_memcmp(ts8L1, ts8L2, 5),\
			ft_memcmp(ts8L1, ts8L2, 8),\
			ft_memcmp(ts8L1, ts8L2, 26),\
			ft_memcmp(ts8L1, ts8L2, 27),\
			ft_memcmp(ts8L1, ts8L2, 28));
	printf("[null s1 > null s2]\ns1:%s\ns2:%s\n", ts8Z1, ts8Z2);
	printf("memcmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			memcmp(ts8Z1, ts8Z2, 0),\
			memcmp(ts8Z1, ts8Z2, 5),\
			memcmp(ts8Z1, ts8Z2, 8),\
			memcmp(ts8Z1, ts8Z2, 26),\
			memcmp(ts8Z1, ts8Z2, 27),\
			memcmp(ts8Z1, ts8Z2, 28));
	printf("ft_memcmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_memcmp(ts8Z1, ts8Z2, 0),\
			ft_memcmp(ts8Z1, ts8Z2, 5),\
			ft_memcmp(ts8Z1, ts8Z2, 8),\
			ft_memcmp(ts8Z1, ts8Z2, 26),\
			ft_memcmp(ts8Z1, ts8Z2, 27),\
			ft_memcmp(ts8Z1, ts8Z2, 28));
}
*/
