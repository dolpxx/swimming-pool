/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:52:18 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 20:59:33 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	plus_atoi(const char *str);
static long	minus_atoi(const char *str);

int	ft_atoi(const char *str)
{
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
	{
		str++;
		return ((int)minus_atoi(str));
	}
	if (*str == '+')
		str++;
	return ((int)plus_atoi(str));
}

static long	plus_atoi(const char *str)
{
	long int	dlim;
	long int	mlim;
	long int	li;
	char		n;

	dlim = LONG_MAX / 10;
	mlim = LONG_MAX % 10;
	li = 0;
	while (ft_isdigit(*str))
	{
		n = *str - '0';
		if (li > dlim || (li == dlim && n > mlim))
			return (LONG_MAX);
		li = li * 10 + n;
		str++;
	}
	return (li);
}

static long	minus_atoi(const char *str)
{
	long int	dlim;
	long int	mlim;
	long int	li;
	char		n;

	dlim = LONG_MIN / 10;
	mlim = LONG_MIN % 10;
	li = 0;
	while (ft_isdigit(*str))
	{
		n = -1 * (*str - '0');
		if (li < dlim || (li == dlim && n < mlim))
			return (LONG_MIN);
		li = li * 10 + n;
		str++;
	}
	return (li);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	ts1[];
	char	ts8[];
	char	ts9[];
	char	ts2[];
	char	ts3[];
	char	ts4[];
	char	ts10[];
	char	ts5[];
	char	ts6[];
	char	ts11[];
	char	ts7[];
	char	ts18[];

	printf("LONG_MAX\t:%ld\n",LONG_MAX);
	printf("LONG_MIN\t:%ld\n",LONG_MIN);
	printf("ULLONG_MAX\t:%llu\n",ULLONG_MAX);
	ts1[] = "12345";
	printf("str\t:%s\tret:%d\n",ts1,atoi(ts1));
	printf("ft_str\t:%s\tret:%d\n\n",ts1,ft_atoi(ts1));
	
	ts8[] = "\t\v\f\r\n 12345";
	printf("str\t:%s\tret:%d\n",ts8,atoi(ts8));
	printf("ft_str\t:%s\tret:%d\n\n",ts8,ft_atoi(ts8));
	ts9[] = "+12345";
	printf("str\t:%s\tret:%d\n",ts9,atoi(ts9));
	printf("ft_str\t:%s\tret:%d\n\n",ts9,ft_atoi(ts9));
	ts2[] = "123456789012345678901";
	printf("str\t:%s\tret:%d\n",ts2,atoi(ts2));
	printf("ft_str\t:%s\tret:%d\n\n",ts2,ft_atoi(ts2));
	
	ts3[] = "12a345";
	printf("str\t:%s\tret:%d\n",ts3,atoi(ts3));
	printf("ft_str\t:%s\tret:%d\n\n",ts3,ft_atoi(ts3));
	
	ts4[] = "2147483646";
	printf("str\t:%s\tret:%d\n",ts4,atoi(ts4));
	printf("ft_str\t:%s\tret:%d\n\n",ts4,ft_atoi(ts4));
	
	ts10[] = "2147483647";
	printf("str\t:%s\tret:%d\n",ts10,atoi(ts10));
	printf("ft_str\t:%s\tret:%d\n\n",ts10,ft_atoi(ts10));
	
	ts5[] = "2147483648";
	printf("str\t:%s\tret:%d\n",ts5,atoi(ts5));
	printf("ft_str\t:%s\tret:%d\n\n",ts5,ft_atoi(ts5));
	
	ts6[] = "-2147483647";
	printf("str\t:%s\tret:%d\n",ts6,atoi(ts6));
	printf("ft_str\t:%s\tret:%d\n\n",ts6,ft_atoi(ts6));
	
	ts11[] = "-2147483648";
	printf("str\t:%s\tret:%d\n",ts11,atoi(ts11));
	printf("ft_str\t:%s\tret:%d\n\n",ts11,ft_atoi(ts11));
	
	ts7[] = "-2147483649";
	printf("str\t:%s\tret:%d\n",ts7,atoi(ts7));
	printf("ft_str\t:%s\tret:%d\n\n",ts7,ft_atoi(ts7));
	
	ts18[] = "+ 12345";
	printf("str\t:%s\tret:%d\n",ts18,atoi(ts18));
	printf("ft_str\t:%s\tret:%d\n\n",ts18,ft_atoi(ts18));
}
*/
