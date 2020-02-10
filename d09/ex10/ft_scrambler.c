/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:52:18 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/23 14:55:40 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	tmp_b;
	int	tmp_c;
	int	tmp_d;

	tmp_b = *b;
	tmp_c = *******c;
	tmp_d = ****d;
	*******c = ***a;
	****d = tmp_c;
	*b = tmp_d;
	***a = tmp_b;
}