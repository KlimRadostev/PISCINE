/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 18:33:44 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/19 19:52:19 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (*s1)
	{
		a += *s1;
		s1++;
	}
	while (*s2)
	{
		b += *s2;
		s2++;
	}
	return (a - b);
}
