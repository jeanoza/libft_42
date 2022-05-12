/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kychoi <kychoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:58:55 by kychoi            #+#    #+#             */
/*   Updated: 2022/05/12 21:06:18 by kychoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_select_nl(char *buffer, char *new_line)
{
	int		i;
	int		len;
	char	*dst;

	if (buffer[0] == '\0')
		return (NULL);
	if (new_line)
		len = new_line - buffer + 1;
	else
		len = ft_strlen(buffer);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && buffer[i])
	{
		dst[i] = buffer[i];
		++i;
	}
	dst[len] = '\0';
	return (dst);
}

static char	*ft_move_cursor(char *buffer)
{
	int		i;
	int		j;
	char	*dst;

	if (!(buffer && buffer[0] == 0) && ft_strlen(buffer) > 1)
	{
		j = 0;
		while (buffer && (buffer)[j] && (buffer)[j] != '\n')
			++j;
		dst = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - j + 1));
		if (dst)
		{
			i = -1;
			while (buffer && (buffer)[j + ++i])
				dst[i] = (buffer)[j + i + 1];
			dst[i] = 0;
			free(buffer);
			return (dst);
		}
	}
	free(buffer);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		buffer[BUFFER_SIZE + 1];
	int			cursor;
	static char	*backup[OPEN_MAX];
	char		*current;
	char		*new_line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	cursor = BUFFER_SIZE;
	while (cursor > 0)
	{
		cursor = read(fd, buffer, BUFFER_SIZE);
		if (cursor == -1)
			return (NULL);
		buffer[cursor] = 0;
		backup[fd] = ft_strjoin_free_s1(backup[fd], buffer);
		if (cursor == 0 && ft_strchr(backup[fd], '\n'))
			break ;
	}
	new_line = ft_strchr(backup[fd], '\n');
	current = ft_select_nl(backup[fd], new_line);
	backup[fd] = ft_move_cursor(backup[fd]);
	return (current);
}

/** loop for check gnl
char	*str;
while ((str = get_next_line(fd)) != NULL)
	printf("%s", str);
*/