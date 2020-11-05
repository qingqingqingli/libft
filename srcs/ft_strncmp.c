/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 15:30:05 by qli           #+#    #+#                 */
/*   Updated: 2020/11/05 10:41:11 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]) & (i < n - 1))
	{
		i++;
	}
	return ((int)((unsigned const char)s1[i] - (unsigned const char)s2[i]));
}
