/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 16:47:30 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/30 11:54:26 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	t_btree	*tmp;
	void	*store;

	if (!root || !data_ref)
		return ((void*)0);
	tmp = root;
	store = (void*)0;
	if (tmp->left && store == (void*)0)
		store = btree_search_item(tmp->left, data_ref, cmpf);
	if (cmpf(data_ref, tmp->item) == 0)
		return (tmp->item);
	if (tmp->right && store == (void*)0)
		store = btree_search_item(tmp->right, data_ref, cmpf);
	return (store);
}
