/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:42:15 by shlee             #+#    #+#             */
/*   Updated: 2018/04/04 15:10:58 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_nbr_nl(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			j++;
		i++;
	}
	return (j);
}

int		ft_nbr_c_bnl(char *file, int x)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = -1;
	while (file[i])
	{
		if (file[i] != '\n')
			j++;
		else if (file[i] == '\n' && k == x)
			return (j);
		else if (file[i] == '\n' && k != x)
		{
			j = 0;
			k++;
		}
		i++;
	}
	return (j);
}

char	**ft_map(char *file, int i)
{
	char	**map;
	int		x;
	int		y;

	if (!(map = (char**)malloc(sizeof(char*) * ft_nbr_nl(file))))
		return (NULL);
	x = 0;
	while (file[i - 1] != '\n')
		i++;
	while (x < ft_nbr_nl(file) - 1)
	{
		y = 0;
		if (!(map[x] = (char*)malloc(sizeof(char) \
						* (ft_nbr_c_bnl(file, x) + 2))))
			return (map);
		while (file[i] && file[i] != '\n')
			map[x][y++] = file[i++];
		map[x][y] = '\n';
		map[x++][y + 1] = '\0';
		i++;
	}
	map[x] = NULL;
	if (ft_nbr_nl(file) == 1)
		map = NULL;
	return (map);
}
