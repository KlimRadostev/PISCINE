/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 17:57:21 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/25 18:59:59 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "everything.h"

int		row_col_check(int **puzzle, int row, int col, int num)
{
	int	index;

	index = 0;
	while (index < 9)
	{
		if (puzzle[index][col] == num)
			return (1);
		if (puzzle[row][index] == num)
			return (1);
		else
			index++;
	}
	return (0);
}

int		square_check(int **puzzle, int row, int col, int num)
{
	int	square_row;
	int square_col;
	int	i;
	int	j;

	square_row = row - row % 3;
	square_col = col - col % 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (puzzle[square_row + i][square_col + j] == num)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_valid(int **puzzle, int row, int col, int num)
{
	if (row_col_check(puzzle, row, col, num))
		return (0);
	if (square_check(puzzle, row, col, num))
		return (0);
	return (1);
}
