#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	//TODO:manage n > strlen(s1)
	while (*((char *)(s1 + i)) == *((char *)(s2 + i)))
	{
		// printf("i:%zu\n", i);
		if (i == n - 1)
			break ;
		++i;
	}
	return (*((char *)(s1 + i)) - *((char *)(s2 + i)));
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft_memcmp	:%d\n", ft_memcmp(av[1], av[2], ft_atoi(av[3])));
	printf("memcmp		:%d\n", memcmp(av[1], av[2], ft_atoi(av[3])));
	// printf("ft_memcmp	:%d\n", ft_memcmp("hello", "helloo", ft_atoi(av[3])));
	// printf("memcmp		:%d\n", memcmp("hello", "helloo", ft_atoi(av[3])));
	return (0);
}
*/