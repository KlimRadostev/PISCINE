/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 17:57:10 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/25 18:45:14 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "everything.h"

void	printer(int **puzzle)
{
	int	j;
	int	i;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(puzzle[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	filler(int **puzzle, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				puzzle[i - 1][j] = 0;
			else
				puzzle[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
}
