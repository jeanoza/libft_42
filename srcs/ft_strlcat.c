/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:19:12 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/25 09:45:31 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = 0;
	while (i < dstsize - dst_len - 1)
	{
		*(dst + dst_len + i) = *(src + i);
		++i;
	}
	*(dst + dst_len + i) = 0;
	return (src_len + dst_len);
}
/*
#include<stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	char	dst[100] = "hel";
	char	dst_ft[100] = "hel";
	size_t	result;
	size_t	result_ft;

	(void)ac;

	result = strlcat(dst, av[1], ft_atoi(av[2]));
	result_ft = ft_strlcat(dst_ft, av[1], ft_atoi(av[2]));

	printf("strlcat		:%s(%zu)\n", dst, result);
	printf("ft_strlcat	:%s(%zu)\n", dst_ft, result_ft);
	return (0);
}
*/