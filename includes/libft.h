#ifndef LIBFT_H
# define LIBFT_H

// # include <unistd.h>
// # include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

/* char */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
/* string */
int		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, unsigned int n);
/* stdlib */
int		ft_atoi(char *str);
#endif
