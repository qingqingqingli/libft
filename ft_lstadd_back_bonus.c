/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:46:48 by qli            #+#    #+#                */
/*   Updated: 2019/11/21 11:25:25 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (*alst == 0)
		*alst = new;
	else
	{
		while ((*alst)->next != 0)
			*alst = (*alst)->next;
		(*alst)->next = new;
	}
}
