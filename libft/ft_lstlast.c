/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:46:35 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:46:36 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	int		i;

	s0[] = "The brown fox ";
	s1[] = "jumps over ";
	s2[] = "the lazy dog.";
	printf("ft_lstnew x3\n");
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
		free(s0);
		return (1);
	}
	ts2 = ft_lstnew(s2);
	if (ts2 == NULL)
	{
		printf("create node error s2\n");
		free(s0);
		free(s1);
		return (1);
	}
	*plst = ts2;
	printf("ft_lstadd_front x2\n");
	ft_lstadd_front(plst, ts1);
	ft_lstadd_front(plst, ts0);
	rdptr = *plst;
	i = ft_lstsize(rdptr);
	printf("node size = %i\n", i);
	printf("ft_lstlast\n");
	rdptr = ft_lstlast(rdptr);
	i = ft_lstsize(rdptr);
	printf("node size = %i\n", i);
	printf("node content = %s\n", rdptr->content);
}
*/
