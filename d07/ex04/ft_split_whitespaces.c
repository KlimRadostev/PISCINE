/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:53:24 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/22 21:57:07 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str);
int		ft_array_size(char *str);
int		ft_let(char *str, int i);

char	**ft_split_whitespaces(char *str)
{
	int		key;
	int		i;
	int		j;
	char	**str1;

	i = 0;
	j = 0;
	if ((str1 = malloc(sizeof(char*) * ft_array_size(str) + 1)) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i])
		{
			key = 0;
			if ((str1[j] = malloc(sizeof(char) * ft_let(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
				str1[j][key++] = str[i++];
			str1[j++][key] = '\0';
		}
	}
	str1[j] = (NULL);
	return (str1);
}

int		ft_array_size(char *str)
{
	int		count;
	int		i;
	int		key;

	count = 0;
	i = 0;
	key = 0;
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			i++;
			key = 1;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if (key == 1)
			{
				count++;
				key = 0;
			}
			i++;
		}
	}
	return (count);
}

int		ft_let(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
		count++;
	}
	return (count);
}
