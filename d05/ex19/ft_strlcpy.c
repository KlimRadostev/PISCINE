/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 15:35:03 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 18:15:58 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	while (src[j])
		j++;
	i = 0;
	while (src[i] && i < (size - 1) && size != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size >= 1)
		dest[i] = '\0';
	return (j);
}
