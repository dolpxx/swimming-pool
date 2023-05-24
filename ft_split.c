/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:35:24 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:36:42 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*snxtop(char const *s, char c);
static char	**init_list(char const *s, char c, size_t *n);
static void	list_free(char **lst);
static char	*pargtomem(char const **cs, char c, char **clst, char **lst);

char	**ft_split(char const *s, char c)
{
	size_t		n;
	char		**lst;
	char		**clst;
	const char	**cs;

	cs = &s;
	lst = init_list(s, c, &n);
	if (lst == NULL)
		return (NULL);
	clst = lst;
	while (n--)
	{
		if (pargtomem(cs, c, clst, lst) == NULL)
			return (NULL);
		clst++;
		*cs = snxtop(*cs, c);
	}
	*clst = NULL;
	return (lst);
}

static char	*pargtomem(const char **cs, char c, char **clst, char **lst)
{
	size_t		len;
	char		*ms;
	const char	*top;

	while (**cs == c && **cs != '\0')
		(*cs)++;
	top = *cs;
	len = 0;
	while (**cs != c && **cs != '\0')
	{
		len++;
		(*cs)++;
	}
	ms = (char *)malloc(len + 1);
	*clst = ms;
	if (ms == NULL)
	{
		list_free(lst);
		return (NULL);
	}
	ft_strlcpy(ms, top, len + 1);
	return (ms);
}

static void	list_free(char **lst)
{
	char	**p;

	p = lst;
	while (*p != NULL)
		free((void *)*p++);
	free(lst);
}

static char	**init_list(char const *s, char c, size_t *n)
{
	if (s == NULL)
		return (NULL);
	*n = 0;
	if (*s != c && *s != '\0')
		*n = 1;
	while (1)
	{
		s = snxtop(s, c);
		if (s == NULL)
			break ;
		(*n)++;
	}
	return ((char **)malloc(((*n) + 1) * sizeof(char *)));
}

static char	*snxtop(char const *s, char c)
{
	size_t	len;
	size_t	i;
	int		f;

	len = ft_strlen(s);
	i = 0;
	f = 0;
	while (len)
	{
		if (f != 0)
		{
			if (*(s + i) != c)
				return ((char *)(s + i));
		}
		else
		{
			if (*(s + i) == c)
				f = 1;
		}
		len--;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*nullstr;
	char	c1;
	char	c2;
	char	c3;
	int		i;
	char	**lst;

	s1 = "split  ||this|for|me|||||!|";
	s2 = "#The#quick##brown###fox#####jumps#over#the#lazy#dog.#";
	s3 = "\0abcdefg\012345678\0";
	nullstr = NULL;
	c1 = '|';
	c2 = '#';
	c3 = '\0';
	printf("\n*s = %s\n", s1);
	printf("dl = %c\n", c1);
	lst = ft_split(s1, c1);
	if (lst == NULL)
		printf("lst = NULL\n");
	else
	{
		i = 0;
		while (lst[i] != NULL)
		{
			printf("para = %s\n", lst[i]);
			i++;
		}
		i = 0;
		while (lst[i] != NULL)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
	}
	printf("\n*s = %s\n", s2);
	printf("dl = %c\n", c2);
	lst = ft_split(s2, c2);
	if (lst == NULL)
		printf("lst = NULL\n");
	else
	{
		i = 0;
		while (lst[i] != NULL)
		{
			printf("para = %s\n", lst[i]);
			i++;
		}
		i = 0;
		while (lst[i] != NULL)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
	}
	printf("\n*s = %s\n", s3);
	printf("dl = %c\n", c3);
	lst = ft_split(s3, c3);
	if (lst == NULL)
		printf("lst = NULL\n");
	else
	{
		i = 0;
		while (lst[i] != NULL)
		{
			printf("para = %s\n", lst[i]);
			i++;
		}
		i = 0;
		while (lst[i] != NULL)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
	}
	printf("\n*s = %s\n", nullstr);
	printf("dl = %c\n", c1);
	lst = ft_split(nullstr, c1);
	if (lst == NULL)
		printf("lst = NULL\n");
	else
	{
		i = 0;
		while (lst[i] != NULL)
		{
			printf("para = %s\n", lst[i]);
			i++;
		}
		i = 0;
		while (lst[i] != NULL)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
	}
	
	printf("\n*s = %s\n", "--1-2--3---4----5------42");
	printf("dl = %c\n", '-');
	lst = ft_split("--1-2--3---4----5------42", '-');
	if (lst == NULL)
		printf("lst = NULL\n");
	else
	{
		i = 0;
		while (lst[i] != NULL)
		{
			printf("para = %s\n", lst[i]);
			i++;
		}
		i = 0;
		while (lst[i] != NULL)
		{
			free(lst[i]);
			i++;
		}
		free(lst);
	}
}
*/
