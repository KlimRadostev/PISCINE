/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:44:52 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/19 22:07:40 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if ((str[i - 1] >= ' ' && str[i - 1] <= '/') &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] >= ':' && str[i - 1] <= '@') &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] >= '[' && str[i - 1] <= '`') &&
					(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i - 1] >= '{' && str[i - 1] <= '~') &&
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && (str[i - 1] != ' '))
			str[i] += 32;
		i++;
	}
	return (str);
}
