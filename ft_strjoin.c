/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:47:47 by qli            #+#    #+#                */
/*   Updated: 2019/11/28 13:39:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	char	*dst;

	if (s1 == 0 || s2 == 0)
		return (0);
	i1 = 0;
	i2 = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == 0)
		return (0);
	while (s1[i1] != '\0')
	{
		dst[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		dst[i1 + i2] = s2[i2];
		i2++;
	}
	dst[i1 + i2] = '\0';
	return (dst);
}
