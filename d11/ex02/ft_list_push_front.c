/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:06:43 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/27 16:19:27 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	if (*begin_list)
	{
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
	else
		*begin_list = ft_create_elem(data);
}
