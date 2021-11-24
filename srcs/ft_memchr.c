#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*((unsigned char *)(s + i)) != c)
	{
		++i;
		if (i == n)
			return (0);
	}
	return ((void *)(s + i));
}
/*
#include <string.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int		c = av[2][0];
	size_t	n = (size_t) ft_atoi(av[3]);
	void	*result = memchr((void *) av[1], c, n);
	void	*ft_result = ft_memchr((void *) av[1], c, n);
	(void)ac;

	printf("ft_memchr	[%p]:%s\n", ft_result, (char *)ft_result);
	printf("memchr		[%p]:%s\n", result, (char *)result);
	return (0);
}
*/