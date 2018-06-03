/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 22:15:56 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/17 23:56:26 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		board[8];
int		solutions;

int		ft_abs(int a)
{
	if (a > 0)
		return (a);
	else
		return (-a);
}

int		place(int row, int column)
{
	int i;

	i = 0;
	while (i <= row - 1)
	{
		if(board[i] == column)
			return (0);
		else
			if(ft_abs(board[i] - column) == ft_abs(i - row))
				return (0);
		i++;
	}
	return (1);
}

void	queen(int row, int n)
{
	int column;

	column = 1;
	while (column <= n)
	{
		if(place(row, column))
		{
			board[row] = column;
			if(row == n)
			{
				solutions++;
				continue;
			}
			else
				queen(row + 1, n);
		}
		column++;
	}
}

int    ft_eight_queens_puzzle()
{
	solutions = 0;
	queen(1, 8);
	return (solutions);
}

int main()
{
	printf("%i",ft_eight_queens_puzzle());
	return (0);
}
