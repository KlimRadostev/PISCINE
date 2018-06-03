/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 18:32:58 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/25 19:11:51 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "everything.h"

int	find_zero(int **puzzle, int *row, int *col)
{
	row = 0;
	while (*row < 9)
	{
		col = 0;
		while (*col < 0)
		{
			if (puzzle[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	solve(int **puzzle)
{
	int	row;
	int	col;
	int	num;

	if (!find_zero(puzzle, &row, &col))
	{
		return (1);
	}
	num = 1;
	while (num <= 9)
	{
		if (check_valid(puzzle, row, col, num))
		{
			puzzle[row][col] = num;
			if (solve(puzzle))
				return (1);
			puzzle[row][col] = 0;
		}
		num++;
	}
	return (0);
}
