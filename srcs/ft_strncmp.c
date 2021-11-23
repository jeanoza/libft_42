#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
		++i;
	if (i == n)
		--i;
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("ft_strncmp:%d\n", ft_strncmp(av[1], av[2], ft_atoi(av[3])));
	printf("strncmp:%d\n", strncmp(av[1], av[2], ft_atoi(av[3])));
	return (0);
}
*/