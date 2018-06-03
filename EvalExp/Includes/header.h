/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 13:51:30 by kradoste          #+#    #+#             */
/*   Updated: 2018/04/01 23:22:23 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *c);
int		eval_expr(char *str);
int		ft_atoi(char *str);
int		do_op(int nb1, int nb2, char op);
char	*whitespace(char *str);
int		next_elem(int jer);
int		eval(void);
int		evalg(void);
int		sub_exp(void);
int		ft_size(int num);
int		jerar(char c);

#endif
