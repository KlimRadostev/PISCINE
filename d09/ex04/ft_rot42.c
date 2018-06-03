/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:22:27 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/23 13:28:40 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 97 + 42) % 26) + 97;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 65 + 42) % 26) + 65;
		i++;
	}
	return (str);
}
