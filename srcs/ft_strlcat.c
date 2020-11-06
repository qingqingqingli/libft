/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:47:49 by qli           #+#    #+#                 */
/*   Updated: 2020/11/05 10:40:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst_i;
	size_t dst_len;
	size_t src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_i = dst_len;
	if (dst == 0 || src == 0)
		return (0);
	if (dstsize <= dst_len || dstsize == 0)
		return (dstsize + src_len);
	else if (dstsize >= dst_len + 1)
	{
		while (src[i] != '\0' && dstsize > dst_len + 1)
		{
			dst[dst_i] = src[i];
			i++;
			dst_i++;
			dstsize--;
		}
	}
	dst[dst_i] = '\0';
	return (dst_len + src_len);
}
