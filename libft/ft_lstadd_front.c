/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:17:07 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:17:07 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	char	s0[];
	char	s1[];
	char	s2[];
	t_list	*ts0;
	t_list	*ts1;
	t_list	*ts2;
	t_list	**plst;
	t_list	*rdptr;

	s0[] = "The brown fox ";
	s1[] = "jumps over ";
	s2[] = "the lazy dog.";
	ts0 = ft_lstnew(s0);
	if (ts0 == NULL)
	{
		printf("create node error for s0\n");
		return (1);
	}
	ts1 = ft_lstnew(s1);
	if (ts1 == NULL)
	{
		printf("create node error s1\n");
		free(ts0);
		return (1);
	}
	ts2 = ft_lstnew(s2);
	if (ts2 == NULL)
	{
		printf("create node error s2\n");
		free(ts0);
		free(ts1);
		return (1);
	}
	*plst = ts2;
	ft_lstadd_front(plst, ts1);
	ft_lstadd_front(plst, ts0);
	rdptr = *plst;
	while (rdptr != NULL)
	{
		printf("%s", (char *)rdptr->content);
		rdptr = rdptr->next;
	}
	free(ts0);
	free(ts1);
	free(ts2);
}
*/
