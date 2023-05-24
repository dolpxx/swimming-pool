/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:18:25 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:18:25 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

/*
#include <stdio.h>

int	main(void)
{
	char const	s[];
	t_list		*lst;

	s[] = "The quick brown fox jumps over the lazy dog.";
	lst = ft_lstnew((void *)s);
	if (lst == NULL)
	{
		printf("alloc error !\n");
		return (0);
	}
	printf("list content =%s\n", lst->content);
	if (lst->next == NULL)
		printf("next pointer = NULL ok!\n");
	free(lst);
}
*/
