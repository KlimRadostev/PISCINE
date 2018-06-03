/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:21:01 by kradoste          #+#    #+#             */
/*   Updated: 2018/04/01 23:23:31 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_size(int num)
{
	int size;

	size = 1;
	while (num > 10)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

int		jerar(char c)
{
	if (c == '-' || c == '+')
		return (0);
	if (c == '*' || c == '/' || c == '%')
		return (1);
	if (c == '(')
		return (2);
	return (0);
}
