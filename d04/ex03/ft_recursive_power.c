/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:40:51 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/17 17:28:15 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 50)
		return (-1);
	if (!nb || power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
