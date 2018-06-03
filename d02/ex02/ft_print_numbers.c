/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 11:55:09 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/16 10:27:51 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char num;

	num = 1;
	while (num++ < 10)
	{
		ft_putchar(num);
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}
