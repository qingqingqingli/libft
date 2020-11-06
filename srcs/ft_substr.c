/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:48:04 by qli           #+#    #+#                 */
/*   Updated: 2020/11/05 10:40:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen((char *)s);
	i = 0;
	if ((size_t)start > size)
		return (ft_strdup(""));
	if (size >= start + len)
		dst = (char *)malloc(sizeof(char) * (len + 1));
	if (size < start + len)
		dst = (char *)malloc(sizeof(char) * (size - start + 1));
	if (dst == 0)
		return (0);
	while (s[start + i] != '\0' && (i < len))
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
