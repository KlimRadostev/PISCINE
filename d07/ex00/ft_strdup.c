/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:57:11 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/22 15:25:23 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*key;
	int		i;

	i = 0;
	while (src[i])
		i++;
	key = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		key[i] = src[i];
		i++;
	}
	key[i] = '\0';
	return (key);
}
