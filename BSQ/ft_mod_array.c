/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:29:04 by shlee             #+#    #+#             */
/*   Updated: 2018/04/03 14:10:39 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_mod_array(char **map, t_size *size)
{
	int	i;
	int	j;
	int	k;

	k = size->g - 1;
	i = size->x - k;
	while (i >= size->x - k && i <= size->x)
	{
		j = size->y - k;
		while (j >= size->y - k && j <= size->y && map[i][j] == size->ec)
		{
			map[i][j] = size->fc;
			j++;
		}
		i++;
	}
	return (map);
}
