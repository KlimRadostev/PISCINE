/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:51:22 by kradoste          #+#    #+#             */
/*   Updated: 2018/04/02 12:39:30 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	do_op(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	if (op == '*')
		return (nb1 * nb2);
	if (op == '%')
		return (nb1 % nb2);
	if (op == '/')
		return (nb1 / nb2);
	return (0);
}
