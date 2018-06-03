/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   everything.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:21:08 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/25 18:45:11 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVERYTHING_H
# define EVERYTHING_H
# include <unistd.h>
# include <stdlib.h>

void	filler(int **puzzle, char **argv);
int		check_valid(int **puzzle, int row, int col, int num);
void	printer(int **puzzle);
int		solve(int **puzzle);
int		check_valid(int **puzzle, int row, int col, int num);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif
