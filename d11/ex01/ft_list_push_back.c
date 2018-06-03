/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:21:06 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/27 16:05:41 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	if (*begin_list)
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
