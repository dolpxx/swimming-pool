/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:42:04 by jchris            #+#    #+#             */
/*   Updated: 2023/06/05 14:15:18 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define TRUE 1
# define FALSE 0

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

# if !BUFFER_SIZE || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX - 1
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

unsigned int	ft_strlen(const char *s1);
char			*ft_strndup(const char *s1, unsigned int end);
char			*ft_strinit(char *s1, unsigned int len);
char			*get_next_line(int fd);

#endif