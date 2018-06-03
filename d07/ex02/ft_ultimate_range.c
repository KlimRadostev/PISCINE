/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:26:33 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/22 15:44:43 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ptr;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int*)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
		ptr[i++] = min++;
	*range = ptr;
	return (i);
}
