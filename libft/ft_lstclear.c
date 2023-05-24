/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:46:23 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:46:23 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cnode;
	t_list	tmpnode;

	if (lst == NULL || del == NULL)
		return ;
	cnode = *lst;
	while (cnode != NULL)
	{
		tmpnode = *cnode;
		(*del)(cnode->content);
		free(cnode);
		cnode = tmpnode.next;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

static void	showlst(t_list *p)
{
	t_list	*t_ptr;

	t_ptr = p;
	while (t_ptr->next != NULL)
	{
		printf("content = %s next = %p\n", t_ptr->content, t_ptr->next);
		t_ptr = t_ptr->next;
	}
	printf("content = %s next = %p\n", t_ptr->content, t_ptr->next);
	printf("\n");
}

static void	ndcntntcl(void *frcntnt)
{
	printf("content free adr %p\n",frcntnt);
	free(frcntnt);
}
int	main(void)
{
	char	s0[];
	char	s1[];
	char	s2[];
	char	*ms0;
	char	*ms1;
	char	*ms2;
	t_list	**lst;
	t_list	*tl0;
	t_list	*tl1;
	t_list	*tl2;

	s0[] = "The brown fox ";
	s1[] = "jumps over ";
	s2[] = "lazy dog.";
	
	ms0 = ft_strdup(s0);
	ms1 = ft_strdup(s1);
	ms2 = ft_strdup(s2);
	printf("contents adr\n");
	printf("ms0 adr%p\n",ms0);
	printf("ms1 adr%p\n",ms1);
	printf("ms2 adr%p\n",ms2);
	tl0 = ft_lstnew(ms0);
	tl1 = ft_lstnew(ms1);
	tl2 = ft_lstnew(ms2);
	printf("lst addr\n");
	printf("tl0 addr%p\n",tl0);
	printf("tl1 addr%p\n",tl1);
	printf("tl2 addr%p\n",tl2);
	lst = &tl1;
	showlst(*lst);
	ft_lstadd_front(lst, tl0);
	ft_lstadd_back(lst, tl2);
	showlst(*lst);
	ft_lstclear(lst, ndcntntcl);
	printf("lst addr = %p\n", *lst);
	printf("tl0 addr = %p\n", tl0);
	printf("tl1 addr = %p\n", tl1);
	printf("tl2 addr = %p\n", tl2);
}
*/
