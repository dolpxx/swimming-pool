/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:46:28 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:46:28 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	char	s[];

	s[] = "The quick brown fox jumps over the lazy dog.";
	char	*str;	
	
	str = ft_strdup(s);
	lst = ft_lstnew(str);
	printf("node content = %s\n", lst->content);
	printf("node adr = %p\n", lst);
	ft_lstdelone(lst, lst->content);
	printf("ft_lstdelone\n");
	printf("freed node adr = \n");
	printf("%p\n", lst);
}

void	del(void *p)
{
	free(p);
}
*/
