/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 17:55:08 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/25 20:20:18 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "everything.h"

int		main(int argc, char **argv)
{
	int		**puzzle;
	int		index;

	index = 0;
	puzzle = (int**)malloc(sizeof(*puzzle) * 9);
	while (index < 9)
	{
		puzzle[index] = (int*)malloc(sizeof(int) * 9);
		index++;
	}
	filler(puzzle, argv);
	if (solve(puzzle) != 0)
	{
		printer(puzzle);
		return (0);
	}
	write(1, "Error\n", 6);
	return (0);
}
