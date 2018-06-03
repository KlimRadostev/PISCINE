/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:48:23 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/19 23:28:10 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_length(char *c)
{
	int i;

	i = 0;
	while (*c)
	{
		i++;
		c++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int size;
	int i;

	i = 0;
	size = ft_str_length(dest);
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	return (dest);
}
