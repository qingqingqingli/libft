/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/20 14:23:34 by qli           #+#    #+#                 */
/*   Updated: 2020/11/05 10:40:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static size_t	ft_check_char(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_check_begin(char const *s1, char const *set)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_char(s1[i], set) == 1)
			i++;
		else if (ft_check_char(s1[i], set) == 0)
			break ;
	}
	return (i);
}

static size_t	ft_check_end(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen((char *)s1) - 1;
	while (len > 0)
	{
		if (ft_check_char(s1[len], set) == 1)
		{
			len--;
			i++;
		}
		else if (ft_check_char(s1[len], set) == 0)
			break ;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	begin = ft_check_begin(s1, set);
	end = ft_check_end(s1, set);
	i = 0;
	if (begin + end >= ft_strlen((char *)s1))
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) -
	begin - end + 1));
	if (dst == 0)
		return (0);
	while (i < ft_strlen((char *)s1) - begin - end)
	{
		dst[i] = s1[begin + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
