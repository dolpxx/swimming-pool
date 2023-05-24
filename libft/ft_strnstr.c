/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:28 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:42:30 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	lenhst;
	size_t	lenndl;

	lenndl = ft_strlen(needle);
	if (lenndl == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	lenhst = ft_strlen(haystack);
	if (lenhst < len)
		len = lenhst;
	idx = 0;
	while ((len - idx) >= lenndl && len > idx)
	{
		if (ft_strncmp(haystack + idx, needle, lenndl) == 0)
			return ((char *)(haystack + idx));
		idx++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[];
	char	f1[];
	char	f0[];
	char	fn[];
	char	*nullneedle;

	s1[] = "The quick brown fox jumps over the lazy dog\0hidden term";
	f1[] = "fox";
	f0[] = "";
	fn[] = "quick brown fox jumps over the lazy dogs";
	printf("haystack\t:%s\nneedle\t\t:%s\n\n", s1, f1);
	nullneedle = NULL;
	printf("[haystack = \"\"  and needl = \"\"]\n");
	printf("strnstr\t\t:%s\n",strnstr(f0, f0, 0));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(f0, f0, 0));
	printf("[needle = \"\"]\n");
	printf("strnstr\t\t:%s\n",strnstr(s1, f0, 20));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, f0, 20));
	printf("[normal seartch]\n");
	printf("strnstr\t\t:%s\n",strnstr(s1, f1, 20));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, f1, 20));
	printf("[len = 0]\n");
	printf("strnstr\t\t:%s\n",strnstr(s1, f1, 0));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, f1, 0));
	
	printf("[not found]\n");
	printf("strnstr\t\t:%s\n",strnstr(s1, fn, 20));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, fn, 20));
	printf("[shorter len = 2]\n");
	printf("strnstr\t\t:%s\n",strnstr(s1, fn, 2));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, fn, 2));
	printf("[source len < needle len]\n");
	printf("strnstr\t\t:%s\n",strnstr(fn, s1, 50));
	printf("fr_strnstr\t:%s\n",ft_strnstr(fn, s1, 50));
	printf("[needle = null]\n");
//	printf("strnstr\t\t:%s\n",strnstr(s1, nullneedle, 20));
	printf("fr_strnstr\t:%s\n\n",ft_strnstr(s1, nullneedle, 20));
}
*/
