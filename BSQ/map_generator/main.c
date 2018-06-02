/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:10:12 by shlee             #+#    #+#             */
/*   Updated: 2018/04/04 12:03:27 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*input;
	char	buf[2];

	if (ac == 2)
	{
		input = (char*)malloc(sizeof(char) * 1000000);
		input[0] = '\0';
		fd = open(av[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
		if (fd < 0)
		{
			ft_putstr("open() error");
			return (1);
		}
		while (read(0, buf, 1))
		{
			buf[1] = '\0';
			input = ft_strcat(input, buf);
		}
		write(fd, input, ft_strlen(input));
		free(input);
		if (close(fd) < 0)
			ft_putstr("close() error");
	}
	return (0);
}
