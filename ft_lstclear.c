/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:46:46 by kychoi            #+#    #+#             */
/*   Updated: 2021/12/02 09:45:18 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!(*lst))
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
#include<stdio.h>
int main(void)
{
	t_list	*l = ft_lstnew(ft_strdup("test1"));
	l->next = ft_lstnew(ft_strdup("test2"));
	printf("l->content			:%p\n", l->content);
	printf("(l->next)	:%p\n", (l->next)->content);
	ft_lstclear(&l, free);
	printf("l->content			:%p\n", l->content);
	printf("(l->next)	:%p\n", (l->next)->content);
	return (0);
}
*/