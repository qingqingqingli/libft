/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:47:12 by qli            #+#    #+#                */
/*   Updated: 2019/11/20 17:48:37 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
