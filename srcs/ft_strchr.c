/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:02:16 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/23 12:54:13 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != c)
		++i;
	if (i > ft_strlen(s))
		return (0);
	return ((char *)(s + i));
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_strchr:	%s\n", ft_strchr(av[1], av[2][0]));
	printf("strchr:		%s\n", strchr(av[1], av[2][0]));
	//for test null
	// printf("ft_strchr:	%s\n", ft_strchr(av[1], 0));
	// printf("strchr:		%s\n", strchr(av[1], 0));
	return (0);
}
*/