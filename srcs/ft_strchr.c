/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyubongchoi <kyubongchoi@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:02:16 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/23 16:15:38 by kyubongchoi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != c)
	{
		++i;
		if (i > (int) ft_strlen(s))
			return (0);
	}
	return ((char *)(s + i));
}
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_strchr	:[%p]%s\n", ft_strchr(av[1], av[2][0]), ft_strchr(av[1], av[2][0]));
	printf("strchr		:[%p]%s\n", strchr(av[1], av[2][0]), strchr(av[1], av[2][0]));
	//for test null
	printf("\ntest with\n");
	printf("ft_strchr	:[%p]%s\n", ft_strchr(av[1], '\0'), ft_strchr(av[1], '\0'));
	printf("strchr		:[%p]%s\n", strchr(av[1], '\0'), strchr(av[1], '\0'));
	return (0);
}