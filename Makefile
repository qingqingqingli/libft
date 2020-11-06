# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/12 11:34:00 by qli           #+#    #+#                  #
#    Updated: 2020/11/05 10:40:04 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_strlen.c\
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

SRC_B = srcs/ft_lstnew_bonus.c\
		srcs/ft_lstadd_front_bonus.c\
		srcs/ft_lstsize_bonus.c\
		srcs/ft_lstlast_bonus.c\
		srcs/ft_lstadd_back_bonus.c\
		srcs/ft_lstdelone_bonus.c\
		srcs/ft_lstclear_bonus.c\
		srcs/ft_lstiter_bonus.c\

SRC_O = $(SRC:.c=.o)

SRC_B_O = $(SRC_B:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_O)
	@echo "Putting into library"
	@ar rc $(NAME) $(SRC_O)

%.o: %.c
	@echo "Compilling: "
	gcc $(FLAGS) -c -o $@ $<

bonus: $(NAME) $(SRC_B_O)
	@echo "Putting bonus into library"
	@ar rc $(NAME) $(SRC_B_O)

clean:
	@echo "Cleaning all .c files"
	@rm -f $(SRC_O) $(SRC_B_O)

fclean: clean
	@echo "cleaning all .a files"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
