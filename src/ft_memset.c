/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:53:45 by kychoi            #+#    #+#             */
/*   Updated: 2021/12/02 09:45:37 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((char *) b)[i] = c;
		++i;
	}
	return (b);
}
/*
#include<stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	int length;
	int	i;

	length = ft_strlen(av[1]);
	printf("before:%s\n", av[1]);
	ft_memset(av[1], 0, ft_atoi(av[2]));
	write(1, "after:", 6);
	i = 0;
	while (i < length)
	{
		write(1, &av[1][i], 1);
		++i;
	}
	return (0);
}
*/