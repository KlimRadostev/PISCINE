/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:51:40 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/21 22:35:16 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *key;

	i = 0;
	if (min >= max)
		return (0);
	key = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
		key[i++] = min++;
	return (key);
}
