/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:08:40 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:10:35 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (TRUE);
	if ('A' <= c && c <= 'Z')
		return (TRUE);
	return (FALSE);
}
