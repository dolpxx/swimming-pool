/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:04:00 by jchris            #+#    #+#             */
/*   Updated: 2023/06/01 22:35:07 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_gcd(int x, int y);

void	ft_redction(int x, int y)
{
	int	g;
	int	x_g;
	int	y_g;

	g = ft_gcd(x, y);
	x_g = x / g;
	y_g = y / g;
	if (y_g == 1)
		printf("%d\n", x_g);
	else
		printf("%d / %d\n", x_g, y_g);
}

static int	ft_gcd(int x, int y)
{
	if (y == 0)
		return (x);
	else
		return (ft_gcd(y, x % y));
}

int	main(void)
{
	ft_redction(14109, 3);
}
