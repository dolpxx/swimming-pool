/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:32:13 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:32:29 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char	s[];
	char	*snull;

	s[] = "The quick brown fox jumps over the lazy dog.";
	ft_putstr_fd(s, 1);
	snull = NULL;
	ft_putstr_fd(snull, 1);
}
*/
