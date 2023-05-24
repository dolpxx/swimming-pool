/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:13:54 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:14:24 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	return (FALSE);
}

/*
#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int	main(void)
{
  long int i;

  int f, f0, t;
  f0 = 0;
  i = INT_MIN;
  while (i <= INT_MAX)
  {
    f = isdigit(i);
    t = ft_isdigit(i);
    if (f != f0 || f != t)
    {
      printf("ret=%d:%d c=0x%04lX %c\n", f, t, i, (char)i);
      f0 = f;
    }
	i++;
  }
}
*/
