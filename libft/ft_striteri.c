/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:42:58 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 20:11:17 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned long long	idx;

	if (s == NULL || f == NULL)
		return ;
	idx = 0;
	while (s[idx] != '\0' && idx <= UINT_MAX)
	{
		(*f)((unsigned int)idx, &s[idx]);
		idx++;
	}
	s[idx] = '\0';
	return ;
}
/*
#include <stdio.h>

static void	mytoupper(unsigned int i, char *c);

int	main(void)
{
	char	s[];
	char	s0[];
	char	*snull;

	s[] = "abcdefg";
	s0[] = "";
	snull = NULL;
	printf("str=%s\n", s);
	ft_striteri(s, mytoupper);
	printf("r=%s\n\n", s);
	printf("str=%s\n", s0);
	ft_striteri(s0, mytoupper);
	printf("r=%s\n\n", s0);
	printf("str=%s\n", snull);
	ft_striteri(snull, mytoupper);
	printf("r=%s\n\n", snull);
	printf("func=%s\n", NULL);
	ft_striteri(s, NULL);
	printf("r=%s\n\n", s);
	printf("str=%s\n", snull);
	printf("func=%s\n", NULL);
	ft_striteri(snull, NULL);
	printf("r=%s\n", snull);
}

static void	mytoupper(unsigned int i, char *c)
{
	if (i % 2 == 1 && *c >= 'a' && *c <= 'z')
		*c = *c - 0x20;
}
*/
