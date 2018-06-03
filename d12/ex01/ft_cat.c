/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:11:20 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/29 16:18:54 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "header.h"

#define BUF_SIZE 4096

void	ft_quotemod()
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

void	ft_display(int ac, char **av)
{
	int     fd;
	int		i;
	int		ret;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (++i < ac)
	{
		if (*av[i] == 45)
			ft_quotemod();
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
		{
			write(2, "cat: ", 5);
			write(2, av[i], ft_strlen(av[i]));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else
				write(2, ": No such file or directory\n", 28);
		}
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_quotemod();
	else
		ft_display(argc, argv);
	return (0);
}
