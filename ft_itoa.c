/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:16:41 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:17:56 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_digit(int n);
static void	num_to_mem(int n, char *mem, int lnc);

char	*ft_itoa(int n)
{
	int		reqsiz;
	char	*mem;

	reqsiz = count_digit(n) + 1;
	mem = (char *)malloc(reqsiz);
	if (mem == NULL)
		return (NULL);
	mem[reqsiz - 1] = '\0';
	num_to_mem(n, mem, reqsiz - 2);
	return (mem);
}

static void	num_to_mem(int n, char *mem, int clm)
{
	unsigned int	ui;

	if (n == 0)
	{
		mem[0] = '0';
		mem[1] = '\0';
		return ;
	}
	if (n < 0)
	{
		ui = -1 * n;
		mem[0] = '-';
	}
	else
		ui = n;
	while (ui)
	{
		mem[clm] = ui % 10 + '0';
		ui = ui / 10;
		clm--;
	}
}

static int	count_digit(int n)
{
	int				cnt;
	unsigned int	ui;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		ui = -1 * n;
		cnt = 1;
	}
	else
	{
		ui = n;
		cnt = 0;
	}
	while (ui)
	{
		ui = ui / 10;
		cnt++;
	}
	return (cnt);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*p;

	n = 0;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);	free(p);
	n = INT_MAX;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = INT_MIN;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 1;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = -1;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 9;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 10;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 99;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 101;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 999999;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
	n = 1000001;
	p = ft_itoa(n);
	printf("num = %i, clm = %i, str = %s\n", n, count_digit(n), p);
	free(p);
}
*/
