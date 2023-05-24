/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:24:25 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:32:00 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec_itoa(unsigned int ui, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	ui;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		ui = (unsigned int)(-n);
	}
	else
		ui = (unsigned int)n;
	rec_itoa(ui, fd);
}

static void	rec_itoa(unsigned int ui, int fd)
{
	char	c;

	c = ui % 10 + '0';
	ui /= 10;
	if (ui != 0)
		rec_itoa(ui, fd);
	write(fd, &c, 1);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	printf("INT_MAX = %i\n", INT_MAX);
	ft_putstr_fd("ft_putnbr:", 1);
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");
	printf("INT_MIN = %i\n", INT_MIN);
	ft_putstr_fd("ft_putnbr:", 1);
	ft_putnbr_fd(INT_MIN, 1);
	printf("\n");
	printf("zero = %i\n", 0);
	ft_putstr_fd("ft_putnbr:", 1);
	ft_putnbr_fd(0, 1);
	printf("\n");
	printf("1 = %i\n", 1);
	ft_putstr_fd("ft_putnbr:", 1);
	ft_putnbr_fd(1, 1);
	printf("\n");
	printf("-1 = %i\n", -1);
	ft_putstr_fd("ft_putnbr:", 1);
	ft_putnbr_fd(-1, 1);
	printf("\n");
}
*/
