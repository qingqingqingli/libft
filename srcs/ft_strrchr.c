/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:48:00 by qli           #+#    #+#                 */
/*   Updated: 2020/11/05 10:40:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if (c == '\0')
	{
		return ((char *)s + ft_strlen((char *)s));
	}
	while (i >= 0)
	{
		if (((char *)s)[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
