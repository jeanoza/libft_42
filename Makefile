HEADER		=	./

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strdup.c \
				ft_calloc.c \
				ft_strnstr.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memmove.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_atoi.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra -I $(HEADER)

NAME		=	libft.a

BONUS_SRCS	= 	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

.c.o:			$(SRCS)
				@tput setaf 5
				@echo "compile: $^"
				$(CC) $(CFLAGS) -c $< -o $@
				@tput sgr0

$(NAME):		$(OBJS)
				@tput setaf 2
				ar rcs $@ $^
				@tput sgr0

all:			$(NAME)

clean:
				@tput setaf 1
				rm -rf $(OBJS) $(BONUS_OBJS)
				@tput sgr0

fclean:			clean
				@tput setaf 1
				rm -f $(NAME)
				@tput sgr0

re: 			fclean all

bonus:			$(BONUS_OBJS)
				@tput setaf 3
				ar rcs $(NAME) $^
				@tput sgr0

.PHONY:			all clean fclean re bonus
