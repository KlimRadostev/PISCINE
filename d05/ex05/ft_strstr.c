/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 17:41:58 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/19 18:32:25 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int x;

	i = 0;
	n = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i])
	{
		x = i;
		while (to_find[n])
		{
			if (str[i] != to_find[n])
				break ;
			i++;
			n++;
			if (!to_find[n])
				return (&str[x]);
		}
		i++;
	}
	return (0);
}
