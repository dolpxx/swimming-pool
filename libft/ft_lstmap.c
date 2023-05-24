/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchris <jchris@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:46:41 by jchris            #+#    #+#             */
/*   Updated: 2023/05/20 21:14:19 by jchris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*gen_lst(t_list *src_nd, void *(*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst_lst;

	if (lst == NULL || f == NULL || del == NULL)
		return ((t_list *) NULL);
	dst_lst = gen_lst(lst, f);
	if (dst_lst == NULL)
	{
		ft_lstclear(&dst_lst, del);
		return (NULL);
	}
	return (dst_lst);
}

static t_list	*gen_lst(t_list *src_nd, void *(*f)(void *))
{
	t_list	*dst_lst;
	t_list	*dst_nd;
	t_list	*predst_nd;

	dst_lst = (t_list *) NULL;
	while (src_nd != NULL)
	{
		dst_nd = ft_lstnew((f)(src_nd->content));
		if (dst_nd == NULL)
		{
			return ((t_list *) NULL);
		}
		if (dst_lst == NULL)
			dst_lst = dst_nd;
		else
			predst_nd->next = dst_nd;
		predst_nd = dst_nd;
		src_nd = src_nd->next;
	}
	return (dst_lst);
}

/*
#include <stdio.h>

void	*f(void *p)
{
	size_t	i;
	char	c;
	char	*cp;

	cp = (char *)p;
	i = 0;
	while(cp[i] != '\0')
	{
		c = cp[i];
		if (c >= 'a' && c <= 'z')
			c += 'A' - 'a';
		cp[i] = c;
		i++;
	}
	return (p);
}

void	del(void *p)
{
	free(p);
}

int	main(void)
{
	char	s0[];
	char	s1[];
	char	s2[];
	char	*ms0;
	char	*ms1;
	char	*ms2;
	t_list	**srclst;
	t_list	*dst_lst;
	t_list	*t0;
	t_list	*t1;
	t_list	*t2;
	t_list	*p;

	s0[] = "The quick brown fox ";
	s1[] = "jumps over ";
	s2[] = "the lazy dog.";
	ms0 = ft_strdup(s0);
	ms1 = ft_strdup(s1);
	ms2 = ft_strdup(s2);
	t0 = ft_lstnew(ms0);
	t1 = ft_lstnew(ms1);
	t2 = ft_lstnew(ms2);
	srclst = &t0;
	ft_lstadd_back(srclst, t1);
	ft_lstadd_back(srclst, t2);
	p = *srclst;
	while (p != NULL)
	{
		printf("nd = %s\n", p->content);
		p = p->next;
	}
	ft_lstmap(*srclst, f, del);
	p = *srclst;
	while (p != NULL)
	{
		printf("nd = %s\n", p->content);
		p = p->next;
	}
}
*/
