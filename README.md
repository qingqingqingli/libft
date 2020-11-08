[![Logo](https://github.com/qingqingqingli/readme_images/blob/master/codam_logo_1.png)](https://github.com/qingqingqingli/libft)

# libft
***This project creates a library with standard libc functions and several other generic functions, which will be used for other 42 projects.***

The purpose is not to reinvent the wheels, but to help us to develop a deep understanding of the standard libc functions and how to use them. 

## Technical considerations

- Allowed functions: *malloc*, *free*, *write*
- All heap allocated memory space must be properly freed when necessary

## Included functions

> libc functionss
* [ft_bzero](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_bzero.c)
* [ft_calloc](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_calloc.c)
* [ft_isalnum](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isalnum.c)
* [ft_isalpha](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isalpha.c)
* [ft_isascii](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isascii.c)
* [ft_isdigit](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isdigit.c)
* [ft_isprint](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isprint.c)
* [ft_itoa](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_itoa.c)
* [ft_memccpy](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memccpy.c)
* [ft_memchr](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memchr.c)
* [ft_memcmp](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memcmp.c)
* [ft_memcpy](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memcpy.c)
* [ft_memmove](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memmove.c)
* [ft_memset](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_memset.c)
* [ft_putchar_fd](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_putchar_fd.c)
* [ft_putendl_fd](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_putendl_fd.c)
* [ft_putnbr_fd](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_putnbr_fd.c)
* [ft_tolower](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_tolower.c)
* [ft_toupper](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_substr.c)

> string manipulation
* [ft_atoi](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_atoi.c)
* [ft_putstr_fd](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_putstr_fd.c)
* [ft_split](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_split.c)
* [ft_strchr](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strchr.c)
* [ft_strdup](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strdup.c)
* [ft_strjoin](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strjoin.c)
* [ft_strlcat](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strlcat.c)
* [ft_strlcpy](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strlcpy.c)
* [ft_strlen](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strlen.c)
* [ft_strmapi](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strmapi.c)
* [ft_strncmp](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strncmp.c)
* [ft_strnstr](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strnstr.c)
* [ft_strncmp](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strncmp.c)
* [ft_strrchr](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strrchr.c)
* [ft_strtrim](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_strtrim.c)
* [ft_substr](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_substr.c)

> linked list manipulation
* [ft_lstadd_back](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstadd_back_bonus.c)
* [ft_lstadd_front](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstadd_front_bonus.c)
* [ft_lstclear](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstclear_bonus.c)
* [ft_lstdelone](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstdelone_bonus.c)
* [ft_lstiter](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstiter_bonus.c)
* [ft_lstlast](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstlast_bonus.c)
* [ft_lstnew](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstnew_bonus.c)
* [ft_lstsize](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstsize_bonus.c)


## Compilation

Run the following commands:

* To compile
	- `make`
* To remove object files:
	- `make clean`
* To remove object files and executable:
	- `make fclean`
* To re-compile:
	- `make re`

## How to test

To test the library, compile with your test file. i.e.

``` shell
$ gcc test.c libft.a
$ ./a.out
```

<!-- To do list
- add test results or a test file -->
