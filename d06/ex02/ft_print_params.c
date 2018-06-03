/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:01:29 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 21:15:27 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
