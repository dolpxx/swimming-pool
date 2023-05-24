/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:36 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:57:05 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	while (n > 0)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 == '\0' || c2 == '\0')
			break ;
		if (c1 != c2)
			break ;
		s1++;
		s2++;
		n--;
	}
	return (c1 - c2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	null1[];
	const char	null2[];
	const char	ts[];
	const char	ts8E1[];
	const char	ts8E2[];
	const char	ts8S1[];
	const char	ts8S2[];
	const char	ts8L1[];
	const char	ts8L2[];

	null1[] = "";
	null2[] = "";
	ts[] = "12345";
	ts8E1[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8E2[] = "abcdefghijklmnopqrstuvwxyz\0abc";
	ts8S1[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	ts8S2[] = "abcdefgHijklmnopqrstuvwxyz\0ABC";
	ts8L1[] = "abcdefgHijklmnopqrstuvwxyz\0ABC";
	ts8L2[] = "abcdefghijklmnopqrstuvwxyz\0ABC";
	printf("[null null]\ns1:%s\ns2:%s\n", null1, null2);
	printf("strncmp   \tn=0 r=%d \
\tn=28 r=%d\n",\
			strncmp(null1, null2, 0),\
			strncmp(null1, null2, 28));
	printf("ft_strncmp\tn=0 r=%d \
\tn=28 r=%d\n\n",\
			ft_strncmp(null1, null2, 0),\
			ft_strncmp(null1, null2, 28));
	printf("[null str]\ns1:%s\ns2:%s\n", null1, ts);
	printf("strncmp   \tn=0 r=%d \
\tn=28 r=%d\n",\
			strncmp(null1, ts, 0),\
			strncmp(null1, ts, 28));
	printf("ft_strncmp\tn=0 r=%d \
\tn=28 r=%d\n\n",\
			ft_strncmp(null1, ts, 0),\
			ft_strncmp(null1, ts, 28));
	printf("[s1 == s2]\ns1:%s\ns2:%s\n", ts8E1, ts8E2);
	printf("strncmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			strncmp(ts8E1, ts8E2, 0),\
			strncmp(ts8E1, ts8E2, 5),\
			strncmp(ts8E1, ts8E2, 8),\
			strncmp(ts8E1, ts8E2, 26),\
			strncmp(ts8E1, ts8E2, 27),\
			strncmp(ts8E1, ts8E2, 28));
	printf("ft_strncmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_strncmp(ts8E1, ts8E2, 0),\
			ft_strncmp(ts8E1, ts8E2, 5),\
			ft_strncmp(ts8E1, ts8E2, 8),\
			ft_strncmp(ts8E1, ts8E2, 26),\
			ft_strncmp(ts8E1, ts8E2, 27),\
			ft_strncmp(ts8E1, ts8E2, 28));
	printf("[s1 < s2]\ns1:%s\ns2:%s\n", ts8S1, ts8S2);
	printf("strncmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			strncmp(ts8S1, ts8S2, 0),\
			strncmp(ts8S1, ts8S2, 5),\
			strncmp(ts8S1, ts8S2, 8),\
			strncmp(ts8S1, ts8S2, 26),\
			strncmp(ts8S1, ts8S2, 27),\
			strncmp(ts8S1, ts8S2, 28));
	printf("ft_strncmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_strncmp(ts8S1, ts8S2, 0),\
			ft_strncmp(ts8S1, ts8S2, 5),\
			ft_strncmp(ts8S1, ts8S2, 8),\
			ft_strncmp(ts8S1, ts8S2, 26),\
			ft_strncmp(ts8S1, ts8S2, 27),\
			ft_strncmp(ts8S1, ts8S2, 28));
	printf("[s1 > s2]\ns1:%s\ns2:%s\n", ts8L1, ts8L2);
	printf("strncmp   \tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n",\
			strncmp(ts8L1, ts8L2, 0),\
			strncmp(ts8L1, ts8L2, 5),\
			strncmp(ts8L1, ts8L2, 8),\
			strncmp(ts8L1, ts8L2, 26),\
			strncmp(ts8L1, ts8L2, 27),\
			strncmp(ts8L1, ts8L2, 28));
	printf("ft_strncmp\tn=0 r=%d  \tn=5 r=%d  \tn=8 r=%d  \
\tn=26 r=%d  \tn=27 r=%d  \tn=28 r=%d\n\n",\
			ft_strncmp(ts8L1, ts8L2, 0),\
			ft_strncmp(ts8L1, ts8L2, 5),\
			ft_strncmp(ts8L1, ts8L2, 8),\
			ft_strncmp(ts8L1, ts8L2, 26),\
			ft_strncmp(ts8L1, ts8L2, 27),\
			ft_strncmp(ts8L1, ts8L2, 28));
}
*/
