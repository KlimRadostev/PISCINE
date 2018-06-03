/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 16:04:01 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/17 10:15:34 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char str[4] = "toto";
	ft_putstr(str);
	return 0;
}
