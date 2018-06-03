/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whitespace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:22:42 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/31 19:25:00 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		valid_length(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			j++;
		i++;
	}
	return (j);
}

char	*whitespace(char *str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = (char *)malloc(sizeof(char) * (valid_length(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}
