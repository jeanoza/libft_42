/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:20:51 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/23 11:38:47 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *) src)[i];
		++i;
	}
	((char *)dst)[i] = 0;
	return (dst);
}

#include<stdio.h>
#include<string.h>
int	main(int ac, char **av)
{
	char	dst[100];
	char	dst_ft[100];

	(void)ac;
	printf("ft_memcpy:%s, (dst_ft):%s\n", ft_memcpy(dst_ft, av[1], ft_atoi(av[2])), dst_ft);
	printf("memcpy:%s, (dst):%s\n", memcpy(dst, av[1], ft_atoi(av[2])), dst);
	return (0);
}