/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:41:59 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/30 15:23:09 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	counter(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	btree_level_count(t_btree *root)
{
	int	count;

	count = 0;
	if (!root)
		return (0);
	if (root->left)
		count = counter(count, btree_level_count(root->left));
	if (root->right)
		count = counter(count, btree_level_count(root->right));
	return (count + 1);
}
