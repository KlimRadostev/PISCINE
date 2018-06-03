/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 21:33:51 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/20 22:47:47 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_argv(int argc, char **argv)
{
	int		switch_done;
	int		i;
	char	*str_swap;

	switch_done = 1;
	while (switch_done == 1)
	{
		switch_done = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				str_swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str_swap;
				switch_done = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_argv(argc, argv);
	while (i != argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
