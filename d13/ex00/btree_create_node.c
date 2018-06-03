/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:32:00 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/29 12:47:39 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tmp;

	if (!(tmp = malloc(sizeof(t_btree))))
		return (NULL);
	tmp->item = item;
	tmp->right = (void*)0;
	tmp->left = (void*)0;
	return (tmp);
}
