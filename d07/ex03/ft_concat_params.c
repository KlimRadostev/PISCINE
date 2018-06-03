/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:08:45 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/22 20:18:49 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		len;

	len = 0;
	i = 1;
	while (i < argc)
		len += ft_strlen(argv[i++]);
	args = (char *)malloc(sizeof(char) * (len + argc));
	i = 1;
	while (i < argc)
	{
		ft_strcat(args, argv[i]);
		if (i != argc - 1)
			ft_strcat(args, "\n");
		else
			ft_strcat(args, "\0");
		i++;
	}
	return (args);
}
