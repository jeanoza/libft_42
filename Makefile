SRC_PATH	=	./srcs/

OBJ_PATH	= 	./bin/

HEADER		=	./

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \

OBJS		=	$(addprefix $(OBJ_PATH), $(SRCS:.c=.o))
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
NAME		=	libft.a

all:			$(NAME)

$(OBJ_PATH):
				@tput setaf 4
				mkdir -p $@
				@tput sgr0

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
				@tput setaf 5
				@echo "compile: $^"
				$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)
				@tput sgr0


$(NAME):		$(OBJ_PATH) $(OBJS)
				@tput setaf 2
				ar rc $@ $(OBJS)
				ranlib $@
				@tput sgr0


clean:
				@tput setaf 1
				rm -rf $(OBJ_PATH)
				@tput sgr0

fclean:			clean
				@tput setaf 1
				rm -f $(NAME)
				@tput sgr0

re: 			fclean all

.PHONY:			all clean fclean re