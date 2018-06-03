/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:26:57 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/30 11:14:50 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*tmp;

	if (!(*root) || !root || !item)
	{
		if (root && item)
			*root = btree_create_node(item);
		return ;
	}
	tmp = *root;
	if (cmpf(tmp->item, item) > 0)
	{
		if (tmp->left)
			btree_insert_data(&tmp->left, item, cmpf);
		else
			tmp->left = btree_create_node(item);
	}
	else
	{
		if (tmp->right)
			btree_insert_data(&tmp->right, item, cmpf);
		else
			tmp->right = btree_create_node(item);
	}
}
