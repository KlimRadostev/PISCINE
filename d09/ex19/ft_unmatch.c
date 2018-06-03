/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:24:02 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/23 15:30:41 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int	i;
	int	x;
	int	c;
	int	count;

	i = 0;
	while (i < length)
	{
		x = 0;
		c = tab[i];
		count = 0;
		while (x < length)
		{
			if (tab[x] == c)
				count++;
			x++;
		}
		if (count % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}
