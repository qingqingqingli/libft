/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 10:42:31 by qli            #+#    #+#                */
/*   Updated: 2019/11/28 16:24:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		*ft_str_create(char *dst, int n, int i, int len)
{
	if (n == -2147483648)
	{
		dst[0] = '-';
		dst[1] = '2';
		n = 147483648;
	}
	if (n == 0)
	{
		dst[0] = '0';
		dst[1] = '\0';
		return (dst);
	}
	if (n < 0)
	{
		dst[0] = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		dst[i] = '0' + (n % 10);
		n = n / 10;
		i--;
	}
	dst[len] = '\0';
	return (dst);
}

static int		ft_check_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*dst;
	int		len;
	int		i;

	len = ft_check_len(n);
	i = len - 1;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	dst = ft_str_create(dst, n, i, len);
	return (dst);
}
