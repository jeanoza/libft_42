/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:10:24 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/25 19:18:24 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		// *((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	char	dst[100] = "ffffffffffff";
	char	dst_ft[100] = "ffffffffffff";
	(void)ac;

	char 	*ptr = memmove(dst, av[1], atoi(av[3]));
	char 	*ptr_ft = ft_memmove(dst_ft, av[1], atoi(av[3]));

	printf("first:\n");
	printf("memmove[%p]:	%s\n", ptr, ptr);
	printf("ft_memmove[%p]:	%s\n", ptr_ft, ptr_ft);

	ptr = memmove(dst, av[2], atoi(av[3]));
	ptr_ft = ft_memmove(dst_ft, av[2], atoi(av[3]));

	printf("second:\n");
	printf("memmove[%p]:	%s\n", ptr, ptr);
	printf("ft_memmove[%p]:	%s\n", ptr_ft, ptr_ft);
	return (0);
}
*/