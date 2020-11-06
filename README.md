<p align="center">
  <img src="https://github.com/qingqingqingli/readme_images/blob/master/codam_logo.png" height='200'>
</p>

# libft
***This project creates a library with standard libc functions and several other generic functions, which will be used for other 42 projects.***

The purpose is not to reinvent the wheels, but to help us to develop a deep understanding of the standard libc functions and how to use them. 

## Technical considerations

- Allowed functions: malloc, free, write
- All heap allocated memory space must be properly freed when necessary

### Libc functions

* [ft_memset](/libft/srcs/ft_memset.c)
* [ft_bzero](/libft/srcs/ft_bzero.c)
* [ft_memcpy](/libft/srcs/ft_memcpy.c)
* [ft_memccpy](/libft/srcs/ft_memccpy.c)
* [ft_memmove](/libft/srcs/ft_memmove.c)
* [ft_memchr](/libft/srcs/ft_memchr.c)
* [ft_memcmp](/libft/srcs/ft_memcmp.c)
* [ft_strlen](/libft/srcs/ft_strlen.c)
* [ft_strdup](/libft/srcs/ft_strdup.c)
* [ft_strcpy](/libft/srcs/ft_strcpy.c)
* [ft_strncpy](/libft/srcs/ft_strncpy.c)
* [ft_strcat](/libft/srcs/ft_strcat.c)
* [ft_strncat](/libft/srcs/ft_strncat.c)
* [ft_strlcat](/libft/srcs/ft_strlcat.c)
* [ft_strchr](/libft/srcs/ft_strchr.c)
* [ft_strrchr](/libft/srcs/ft_strrchr.c)
* [ft_strstr](/libft/srcs/ft_strstr.c)
* [ft_strnstr](/libft/srcs/ft_strnstr.c)
* [ft_strcmp](/libft/srcs/ft_strcmp.c)
* [ft_strncmp](/libft/srcs/ft_strncmp.c)
* [ft_atoi](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_atoi.c)
* [ft_isalpha](/libft/srcs/ft_isalpha.c)
* [ft_isdigit](/libft/srcs/ft_isdigit.c)
* [ft_isalnum](/libft/srcs/ft_isalnum.c)
* [ft_isascii](/libft/srcs/ft_isascii.c)
* [ft_isprint](/libft/srcs/ft_isprint.c)
* [ft_toupper](/libft/srcs/ft_toupper.c)
* [ft_tolower](/libft/srcs/ft_tolower.c)

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

To test the library, compile with your program. i.e.

`./program libft.a`
