/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:46:32 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 19:46:32 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	sptosh(void *str)
{
	int	i;

	while(str[i] != '\0')
	{
		if (str[i] == ' ')
			str[i] = '#';
		i++;
	}
}

int	main(void)
{
	char	s0[];
	char	s1[];
	char	s2[];
	char	*ms0;
	char	*ms1;
	char	*ms2;
	t_list	*t0;
	t_list	*t1;
	t_list	*t2;
	t_llst	**lst;

	s0[] = "The quick brown fox ";
	s1[] = "jumps over ";
	s2[] = "the lazy dog.";
	ms0 = ft_strdup(s0);
	ms1 = ft_strdup(s1);
	ms2 = ft_strdup(s2);
	t0 = ft_lstnew(ms0);
	t1 = ft_lstnew(ms1);
	t2 = ft_lstnew(ms2);
	lst = &t0;
	ft_lstadd_back(lst, t1);
	ft_lstadd_back(lst, t2);
}
*/
