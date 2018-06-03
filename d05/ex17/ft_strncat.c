/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 23:29:37 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 11:34:26 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[i] && nb > 0)
	{
		dest[size + i] = src[i];
		i++;
		nb--;
	}
	dest[size + i] = '\0';
	return (dest);
}
