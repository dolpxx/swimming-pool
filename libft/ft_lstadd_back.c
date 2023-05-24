/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:17:01 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:18:00 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnd;

	if (lst == NULL || new == NULL)
		return ;
	lastnd = ft_lstlast(*lst);
	if (lastnd == NULL)
		*lst = new;
	else
		lastnd->next = new;
}

/*
#include <stdio.h>

static void	showlst(t_list *p)
{
	t_list	*t_ptr;

	t_ptr = p;
	while (t_ptr != NULL)
	{
		printf("content = %s next = %p\n", t_ptr->content, t_ptr->next);
		t_ptr = t_ptr->next;
	}
	printf("\n");
}
int	main(void)
{
	char	s0[];
	char	s1[];
	char	s2[];
	t_list	**lst;
	t_list	*t0;
	t_list	*t1;
	t_list	*t2;

	s0[] = "The brown fox ";
	s1[] = "jumps over ";
	s2[] = "the lazy dog.";
	printf("ft_lstnew 0\n");
	t0 = ft_lstnew(s0);
	printf("lst0 content = %s next %p\n", t0->content, t0->next);
	printf("ft_lstnew 1\n");
	t1 = ft_lstnew(s1);
	printf("lst1 content = %s next %p\n", t1->content, t1->next);
	printf("ft_lstnew 2\n");
	t2 = ft_lstnew(s2);
	printf("lst2 content = %s next %p\n", t2->content, t2->next);
	lst = &t0;
	showlst(*lst);
	ft_lstadd_back(lst, t1);
	showlst(*lst);
	ft_lstadd_back(lst, t2);
	showlst(*lst);
	free(t0);
	free(t1);
	free(t2);
}
*/
