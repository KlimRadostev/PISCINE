/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:50:35 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/28 22:00:09 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	if (!*begin_list1 || !begin_list1)
		*begin_list1 = begin_list2;
	else
	{
		tmp = *begin_list1;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
}
