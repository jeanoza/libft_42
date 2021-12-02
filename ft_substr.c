/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:37:18 by kychoi            #+#    #+#             */
/*   Updated: 2021/12/02 09:46:13 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		++i;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	unsigned int start = ft_atoi(av[2]);
	size_t len = ft_atoi(av[3]);
	printf("result:%s\n", ft_substr(av[1], start, len));
	return (0);
}
*/