/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 15:50:44 by qli            #+#    #+#                */
/*   Updated: 2019/11/28 17:00:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_check(const char *haystack, const char *needle,
size_t len_left)
{
	size_t i;
	size_t correct;
	size_t wrong;
	size_t len;

	i = 0;
	correct = 0;
	wrong = 0;
	len = ft_strlen(needle);
	while (needle[i] != '\0' && haystack[i] != '\0' && i < len_left)
	{
		if (needle[i] == haystack[i])
		{
			i++;
			correct++;
		}
		else if (needle[i] != haystack[i])
		{
			i++;
			wrong++;
		}
	}
	if (correct > 0 && wrong == 0 && len == correct + wrong)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len_check;
	size_t len_left;

	i = 0;
	len_check = 0;
	len_left = len - len_check;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (needle[i] != '\0' && haystack[i] != '\0' && len_left > 0)
	{
		if (ft_str_check(haystack, needle, len_left) == 1)
			return ((char *)haystack);
		else if (ft_str_check(haystack, needle, len_left) == 0)
		{
			haystack++;
			len_check++;
			len_left = len - len_check;
			i = 0;
		}
	}
	return (NULL);
}
