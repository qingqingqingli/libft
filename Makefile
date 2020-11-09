# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/12 11:34:00 by qli           #+#    #+#                  #
#    Updated: 2020/11/09 09:37:51 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	srcs/ft_strlen.c\
			srcs/ft_strncmp.c\
			srcs/ft_toupper.c\
			srcs/ft_tolower.c\
			srcs/ft_memset.c\
			srcs/ft_bzero.c\
			srcs/ft_memcpy.c\
			srcs/ft_memccpy.c\
			srcs/ft_memmove.c\
			srcs/ft_memchr.c\
			srcs/ft_memcmp.c\
			srcs/ft_isalpha.c\
			srcs/ft_isdigit.c\
			srcs/ft_isalnum.c\
			srcs/ft_isascii.c\
			srcs/ft_isprint.c\
			srcs/ft_strchr.c\
			srcs/ft_strrchr.c\
			srcs/ft_strlcpy.c\
			srcs/ft_strlcat.c\
			srcs/ft_strnstr.c\
			srcs/ft_atoi.c\
			srcs/ft_calloc.c\
			srcs/ft_strdup.c\
			srcs/ft_substr.c\
			srcs/ft_strjoin.c\
			srcs/ft_strmapi.c\
			srcs/ft_putchar_fd.c\
			srcs/ft_putstr_fd.c\
			srcs/ft_putendl_fd.c\
			srcs/ft_putnbr_fd.c\
			srcs/ft_strtrim.c\
			srcs/ft_split.c\
			srcs/ft_itoa.c

SRC_B	=	srcs/ft_lstnew_bonus.c\
			srcs/ft_lstadd_front_bonus.c\
			srcs/ft_lstsize_bonus.c\
			srcs/ft_lstlast_bonus.c\
			srcs/ft_lstadd_back_bonus.c\
			srcs/ft_lstdelone_bonus.c\
			srcs/ft_lstclear_bonus.c\
			srcs/ft_lstiter_bonus.c\

GREEN	= 	\033[38;5;46m
WHITE	= 	\033[38;5;15m
GREY	= 	\033[38;5;8m
ORANGE	= 	\033[38;5;202m
RED		= 	\033[38;5;160m

SRC_O	=	$(SRC:.c=.o)

SRC_B_O = 	$(SRC_B:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_O)
	@echo "$(GREEN)Creating libft.a$(WHITE)"
	@ar rc $(NAME) $(SRC_O)

%.o: %.c
	@echo "$(GREY)Compilling: $(WHITE)$<"
	@gcc $(FLAGS) -c -o $@ $<

bonus: $(NAME) $(SRC_B_O)
	@echo "$(GREEN)Adding bonus functions to libft.a $<$(WHITE)"
	@ar rc $(NAME) $(SRC_B_O)

clean:
	@echo "$(RED)Cleaning all .c files$(WHITE)"
	@rm -f $(SRC_O) $(SRC_B_O)

fclean: clean
	@echo "$(RED)cleaning all .a files$(WHITE)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
