/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:54:21 by kradoste          #+#    #+#             */
/*   Updated: 2018/04/01 23:23:42 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		g_actual = 0;
char	*g_str;

int		next_elem(int jer)
{
	int		num;
	char	op;

	if (g_str[g_actual] == '(')
	{
		g_actual++;
		return (sub_exp());
	}
	num = ft_atoi(&g_str[g_actual]);
	g_actual += ft_size(num);
	if (!g_str[g_actual])
	{
		return (num);
	}
	op = g_str[g_actual];
	if (jer >= jerar(op))
		return (num);
	else
	{
		jer = jerar(op);
		g_actual--;
		return (eval());
	}
	return (num);
}

int		eval(void)
{
	int		jer;
	int		op1;
	int		op2;
	char	op;

	op1 = next_elem(jer);
	op = g_str[g_actual];
	g_actual++;
	op2 = next_elem(jer);
	return (do_op(op1, op2, op));
}

int		evalg(void)
{
	int		jer;
	int		op1;
	int		op2;
	char	op;

	jer = 0;
	op1 = next_elem(jer);
	while (g_str[g_actual])
	{
		op = g_str[g_actual];
		g_actual++;
		op2 = next_elem(jer);
		op1 = do_op(op1, op2, op);
	}
	if (g_str[g_actual] == ')')
		g_actual++;
	return (op1);
}

int		sub_exp(void)
{
	int		jer;
	int		op1;
	int		op2;
	char	op;

	jer = 0;
	op1 = next_elem(jer);
	while (g_str[g_actual] && g_str[g_actual] != ')')
	{
		op = g_str[g_actual];
		g_actual++;
		op2 = next_elem(jer);
		op1 = do_op(op1, op2, op);
	}
	if (g_str[g_actual] == ')')
		g_actual++;
	return (op1);
}

int		eval_expr(char *g_str1)
{
	int	x;

	g_str = whitespace(g_str1);
	x = evalg();
	return (x);
}
