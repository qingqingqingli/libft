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

* [ft_memset](/libft/ft_memset.c)
* [ft_bzero](/libft/ft_bzero.c)
* [ft_memcpy](/libft/ft_memcpy.c)
* [ft_memccpy](/libft/ft_memccpy.c)
* [ft_memmove](/libft/ft_memmove.c)
* [ft_memchr](/libft/ft_memchr.c)
* [ft_memcmp](/libft/ft_memcmp.c)
* [ft_strlen](/libft/ft_strlen.c)
* [ft_strdup](/libft/ft_strdup.c)
* [ft_strcpy](/libft/ft_strcpy.c)
* [ft_strncpy](/libft/ft_strncpy.c)
* [ft_strcat](/libft/ft_strcat.c)
* [ft_strncat](/libft/ft_strncat.c)
* [ft_strlcat](/libft/ft_strlcat.c)
* [ft_strchr](/libft/ft_strchr.c)
* [ft_strrchr](/libft/ft_strrchr.c)
* [ft_strstr](/libft/ft_strstr.c)
* [ft_strnstr](/libft/ft_strnstr.c)
* [ft_strcmp](/libft/ft_strcmp.c)
* [ft_strncmp](/libft/ft_strncmp.c)
* [ft_atoi](/libft/ft_atoi.c)
* [ft_isalpha](/libft/ft_isalpha.c)
* [ft_isdigit](/libft/ft_isdigit.c)
* [ft_isalnum](/libft/ft_isalnum.c)
* [ft_isascii](/libft/ft_isascii.c)
* [ft_isprint](/libft/ft_isprint.c)
* [ft_toupper](/libft/ft_toupper.c)
* [ft_tolower](/libft/ft_tolower.c)

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
