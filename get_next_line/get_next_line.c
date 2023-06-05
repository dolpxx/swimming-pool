/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:41:17 by jchris            #+#    #+#             */
/*   Updated: 2023/06/05 14:24:00 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

unsigned int	ft_strlen(const char *s1)
{
	unsigned int	i;

	if (s1 == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char	*ft_strndup(const char *s1, unsigned int end)
{
	unsigned int	len;
	char			*p;
	unsigned int	i;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	if (end > len)
		end = len;
	p = malloc(sizeof(char) * (end + 1));
	i = 0;
	while (*s1 != '\0' && i < end)
		p[i++] = *s1++;
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	char			*p;
	unsigned int	i;

	if (s1 == NULL)
		return ((char *)(s2));
	if (s2 == NULL)
		return ((char *)(s1));
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	i = 0;
	while (*s1 != '\0')
		p[i++] = *s1++;
	while (*s2 != '\0')
		p[i++] = *s2++;
	p[i] = '\0';
	return (p);
}

char	*ft_strinit(char *s1, unsigned int len)
{
	unsigned int	i;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		s1[i++] = '\0';
	return (s1);
}

char	*get_next_line(int fd)
{
	char			str[BUFFER_SIZE + 1];
	int				size;
	unsigned int	i;
	char			*ans;

	ans = "";
	ft_strinit(str, BUFFER_SIZE);
	while (TRUE)
	{
		size = read(fd, str, BUFFER_SIZE);
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == '\n')
				return (ft_strjoin(ans, ft_strndup(str, i)));
			i++;
		}
		ans = ft_strjoin(ans, str);
	}
	return (ans);
}

int	main(void)
{
	char	*p;

	p = get_next_line(0);
	printf("%s\n", p);
}
