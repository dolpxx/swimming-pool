/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:16:18 by jchris            #+#    #+#             */
/*   Updated: 2023/05/30 18:13:20 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define TRUE 1
# define FALSE 0

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_formats(va_list args, const char format);
int	ft_printbin(unsigned int nb);
int	ft_printchar(unsigned int c);
int	ft_printdeci(int nb);
int	ft_printf(const char *str, ...);
int	ft_printhex(unsigned int nb, const char format);
int	ft_printpercent(void);
int	ft_printptr(uintptr_t nb);
int	ft_printstr(const char *str);
int	ft_printunsigned(unsigned int nb);

#endif
