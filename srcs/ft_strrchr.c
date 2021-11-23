/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:59:19 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/23 13:42:04 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (*(s + i) != c && i >= 0)
		--i;
	if (i == -1)
		return (0);
	return ((char *)(s + i));
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_strrchr:	[%p]%s\n", ft_strrchr(av[1], av[2][0]), ft_strrchr(av[1], av[2][0]));
	printf("strrchr:	[%p]%s\n", strrchr(av[1], av[2][0]), strrchr(av[1], av[2][0]));
	//for test null
	printf("\ntest with \0\n");
	printf("ft_strrchr:	[%p]%s\n", ft_strrchr(av[1], '\0'), ft_strrchr(av[1], '\0'));
	printf("strrchr:	[%p]%s\n", strrchr(av[1], '\0'), strrchr(av[1], '\0'));
	return (0);
}
*/