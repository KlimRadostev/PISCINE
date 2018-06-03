/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 11:00:40 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/19 19:01:26 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] > 57 || str[i] < 48))
	{
		if (str[i] == '-' && (str[i + 1] >= 48 || str[i + 1] <= 57))
			sign = -1;
		i++;
	}
	while (str[i] && ((str[i] >= 48) && (str[i] <= 57)))
	{
		result *= 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
