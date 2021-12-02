/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:02:16 by kychoi            #+#    #+#             */
/*   Updated: 2021/12/02 09:45:52 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != (char) c)
	{
		if (i == (int) ft_strlen(s))
			return (0);
		++i;
	}
	return ((char *)(s + i));
}
/*
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_strchr:	[%p]%s\n", ft_strchr(av[1], av[2][0]),
		ft_strchr(av[1], av[2][0]));
	printf("strrchr:	[%p]%s\n", strrchr(av[1], av[2][0]),
		strrchr(av[1], av[2][0]));
	//for test null
	printf("\ntest with (null)\n");
	printf("ft_strchr:	[%p]%s\n", ft_strchr(av[1], 0),
		ft_strchr(av[1], 0));
	printf("strrchr:	[%p]%s\n",
		strrchr(av[1], 0), strrchr(av[1], 0));
	//test max char
	printf("\ntest with (over max char(127))\n");
	printf("ft_strchr:	[%p]%s\n", ft_strchr(av[1], av[2][0] + 256),
		ft_strchr(av[1], av[2][0] + 256));
	printf("strchr:		[%p]%s\n",
		strchr(av[1], av[2][0] + 256), strchr(av[1], av[2][0] + 256));
	return (0);
}
*/