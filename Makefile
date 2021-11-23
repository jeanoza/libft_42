SRC_PATH	=	./srcs/

OBJ_PATH	= 	./bin/

HEADER		=	./includes/

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_atoi.c \
				#isprint strlen to add

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