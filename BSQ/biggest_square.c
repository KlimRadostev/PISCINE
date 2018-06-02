/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:25:40 by kradoste          #+#    #+#             */
/*   Updated: 2018/04/04 11:44:10 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	small_square_case(int **num_map, int x, int y, t_size *square)
{
	int		god;

	god = num_map[x][y];
	if (god > square->g)
	{
		square->g = god;
		square->x = x;
		square->y = y;
	}
}

void	ones_generator(int **num_map, char **map, t_size *square)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (map[x][y] != '\n')
	{
		if (map[x][y] == square->oc)
			num_map[x][y] = 0;
		else
			num_map[x][y] = 1;
		small_square_case(num_map, x, y, square);
		y++;
	}
	num_map[x][y] = '\0';
	y = 0;
	while (map[x])
	{
		if (map[x][y] == square->oc)
			num_map[x][y] = 0;
		else
			num_map[x][y] = 1;
		small_square_case(num_map, x, y, square);
		x++;
	}
}

void	store_calculate(int **num_map, int x, int y, t_size *square)
{
	int		s_num;
	int		god;

	s_num = num_map[x - 1][y - 1];
	if (num_map[x - 1][y] < s_num)
		s_num = num_map[x - 1][y];
	if (num_map[x][y - 1] < s_num)
		s_num = num_map[x][y - 1];
	num_map[x][y] = s_num + 1;
	god = num_map[x][y];
	if (god > square->g)
	{
		square->g = god;
		square->x = x;
		square->y = y;
	}
}

void	number_generator(int **num_map, char **map, t_size *square)
{
	int		x;
	int		y;

	x = 1;
	while (map[x])
	{
		y = 1;
		while (map[x][y] && map[x][y] != '\n')
		{
			if (map[x][y] == square->oc)
				num_map[x][y] = 0;
			else
				store_calculate(num_map, x, y, square);
			y++;
		}
		num_map[x][y] = '\0';
		x++;
	}
}

t_size	*number_equation(char **map, t_size *size)
{
	t_size	*square;
	int		**num_map;
	int		i;

	i = 0;
	if (!(square = (t_size *)malloc(sizeof(t_size))))
		return (size);
	square->x = 0;
	square->y = 0;
	square->g = 0;
	square->ec = size->ec;
	square->oc = size->oc;
	square->fc = size->fc;
	if (!(num_map = (int **)malloc(sizeof(int *) * (size->x + 1))))
		return (size);
	while (i < size->x)
	{
		if (!(num_map[i] = (int *)malloc(sizeof(int) * (size->y + 1))))
			return (size);
		i++;
	}
	ones_generator(num_map, map, square);
	number_generator(num_map, map, square);
	free(num_map);
	return (square);
}
