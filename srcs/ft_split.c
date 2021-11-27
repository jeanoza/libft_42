/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:50:30 by kychoi            #+#    #+#             */
/*   Updated: 2021/11/27 16:50:31 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_num(char const *s, char c)
{
	size_t	i;
	int		word_num;

	i = 0;
	word_num = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] == c)
			++i;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				++word_num;
			++i;
		}
	}
	return (word_num);
}

static char	*ft_strndup(char const *s, int len)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		idx_s_start;
	int		idx_s_move;
	int		idx_strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (get_word_num(s, c) + 1));
	if (!strs)
		return (NULL);
	idx_strs = 0;
	idx_s_start = 0;
	idx_s_move = 0;
	while (s[idx_s_move] && idx_strs < get_word_num(s, c))
	{
		while (s[idx_s_move] && s[idx_s_move] == c)
			++idx_s_move;
		idx_s_start = idx_s_move;
		while (s[idx_s_move] && s[idx_s_move] != c)
			++idx_s_move;
		strs[idx_strs] = ft_strndup(s + idx_s_start, idx_s_move - idx_s_start);
		++idx_strs;
	}
	strs[idx_strs] = NULL;
	return (strs);
}
/*
#include<stdio.h>//TO_REMOVE
int	main(int ac, char **av)
{
	(void)ac;
	printf("s1 length: %zu\n", ft_strlen(av[1]));
	char **strs = ft_split(av[1], av[2][0]);
	int	i = 0;
	while (i < 2)
	{
		printf("strs[%d]	:%s\n", i, strs[i]);
		free(strs[i]);
		++i;
	}
	free(strs);
	return (0);
}
*/