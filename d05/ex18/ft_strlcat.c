/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:17:01 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 15:31:56 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int t;
	unsigned int x;

	i = 0;
	while (dest[i])
		i++;
	x = 0;
	t = 0;
	while (src[x])
		x++;
	if (i >= size)
		return (x + size);
	while (src[t] && i + t < size - 1)
	{
		dest[i + t] = src[t];
		t++;
	}
	dest[i + t] = '\0';
	return (i + x);
}
