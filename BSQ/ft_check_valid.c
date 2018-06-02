/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:34:49 by shlee             #+#    #+#             */
/*   Updated: 2018/04/03 13:47:54 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_valid(char **map, t_size *size)
{
	int	i;
	int	j;

	i = 0;
	if (map == NULL)
		return (0);
	while (i < size->x)
	{
		j = 0;
		while (map[i][j] != '\n')
		{
			if (map[i][j] != size->ec && map[i][j] != size->oc)
				return (0);
			j++;
		}
		if (j != size->y)
			return (0);
		i++;
	}
	return (1);
}
