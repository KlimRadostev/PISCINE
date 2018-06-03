/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:54:33 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/27 18:42:53 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (!begin_list)
		return (0);
	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
