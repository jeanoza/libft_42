/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:46:46 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/28 17:30:17 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!(*lst))
		return ;
	current = *lst;
	while (current->next != NULL)
	{
		next = current->next;
		if (current->content)
			del(current->content);
		del(current);
		current = next;
	}
}
