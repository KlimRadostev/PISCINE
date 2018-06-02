/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:53:22 by shlee             #+#    #+#             */
/*   Updated: 2018/04/04 15:13:33 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read(char *av)
{
	int		fd;
	char	*file;
	char	buf[2];

	if (!(file = (char*)malloc(sizeof(char) * 1000000)))
		return (file);
	file[0] = '\0';
	fd = open(av, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("open() error\n");
		return (file);
	}
	while (read(fd, buf, 1))
	{
		buf[1] = '\0';
		file = ft_strcat(file, buf);
	}
	if (close(fd) < 0)
	{
		ft_putstr("close() error\n");
		return (file);
	}
	return (file);
}

void	ft_input_bsq(void)
{
	char	*file;
	char	buf[2];
	char	**map;
	t_size	*size;

	if (!(file = (char*)malloc(sizeof(char) * 10000000)))
		return ;
	file[0] = '\0';
	while (read(0, buf, 1))
	{
		buf[1] = '\0';
		file = ft_strcat(file, buf);
	}
	size = ft_variables(file);
	map = ft_map(file, 0);
	if (ft_check_valid(map, size) == 0)
		ft_putstr("map error\n");
	else
	{
		size = number_equation(map, size);
		map = ft_mod_array(map, size);
		ft_putarray(map);
	}
	free(map);
	free(file);
}

void	ft_extra(char **map, t_size *size)
{
	char	**map2;
	t_size	*size2;

	size2 = number_equation(map, size);
	map2 = ft_mod_array(map, size2);
	ft_putarray(map2);
}

void	ft_free(char **map, t_size *size, char *file)
{
	free(map);
	free(size);
	free(file);
}

int		main(int ac, char **av)
{
	int		i;
	char	*file;
	char	**map;
	t_size	*size;

	i = 0;
	if (ac == 1)
		ft_input_bsq();
	while (++i < ac)
	{
		file = ft_read(av[i]);
		if (*file)
		{
			size = ft_variables(file);
			map = ft_map(file, 0);
			if (ft_check_valid(map, size) == 0)
				ft_putstr("map error\n");
			else
				ft_extra(map, size);
			ft_free(map, size, file);
		}
		if (i != ac - 1)
			ft_putchar('\n');
	}
	return (0);
}
