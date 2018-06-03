/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:16:56 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 21:31:02 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int x;

	argc--;
	while (argc > 0)
	{
		x = 0;
		while (argv[argc][x])
		{
			ft_putchar(argv[argc][x]);
			x++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
