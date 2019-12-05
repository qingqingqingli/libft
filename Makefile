# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: qli <qli@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/12 11:34:00 by qli            #+#    #+#                 #
#    Updated: 2019/11/28 15:40:09 by qli           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c\
		ft_strncmp.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c

SRC_B = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\

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
