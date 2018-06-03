/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:36:38 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/26 17:51:42 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *n;

	i = 0;
	n = (int*)malloc(sizeof(int) * length + 1);
	while (i < length)
	{
		n[i] = f(tab[i]);
		i++;
	}
	return (n);
}
