<p align="center">
  <img src="https://github.com/qingqingqingli/readme_images/blob/master/codam_logo.png" height='200'>
</p>

# libft
***This project creates a library with standard libc functions and several other generic functions, which will be used for other 42 projects.***

The purpose is not to reinvent the wheels, but to help us to develop a deep understanding of the standard libc functions and how to use them. 

## Technical considerations

- Allowed functions: malloc, free, write
- All heap allocated memory space must be properly freed when necessary

### Included functions

> libc functions
* [ft_atoi](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_atoi.c)
* [ft_bzero](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_bzero.c)
* [ft_calloc](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_calloc.c)
* [ft_isalnum](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isalnum.c)
* [ft_isalpha](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isalpha.c)
* [ft_isascii](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isascii.c)
* [ft_isdigit](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isdigit.c)
* [ft_isprint](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_isprint.c)
* [ft_itoa](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_itoa.c)

> linked list related functions
* [ft_lstadd_back](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstadd_back_bonus.c)
* [ft_lstadd_front](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstadd_front_bonus.c)
* [ft_lstclear](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstclear_bonus.c)
* [ft_lstdelone](https://github.com/qingqingqingli/libft/blob/master/srcs/ft_lstdelone_bonus.c)


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
