/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:56:53 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/15 23:14:47 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char n;
	char j;
	char k;

	n = '0' - 1;
	while (++n <= '7')
	{
		j = n;
		while (++j <= '8')
		{
			k = j;
			while (++k <= '9')
			{
				ft_putchar(n);
				ft_putchar(j);
				ft_putchar(k);
				if (n < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
