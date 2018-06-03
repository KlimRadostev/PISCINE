/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 22:18:31 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/22 22:33:02 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int	n;
	int	i;

	n = 0;
	while (tab[n])
	{
		i = 0;
		while (tab[n][i])
		{
			ft_putchar(tab[n][i]);
			i++;
		}
		ft_putchar('\n');
		n++;
	}
}
