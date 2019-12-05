/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_ft_memccpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:47:15 by qli            #+#    #+#                */
/*   Updated: 2019/11/28 15:16:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return ((void*)(unsigned char*)dst + i + 1);
		i++;
	}
	return (0);
}
