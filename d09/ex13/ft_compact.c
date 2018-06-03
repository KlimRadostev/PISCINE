/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:00:11 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/23 15:04:07 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int index;
	int size;

	index = 0;
	size = length;
	while (index < length)
	{
		if (!tab[index])
			size--;
	}
	return (size);
}
