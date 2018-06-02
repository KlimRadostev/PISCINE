/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_variables.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:45:14 by shlee             #+#    #+#             */
/*   Updated: 2018/04/04 14:54:32 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_size	*ft_variables(char *file)
{
	t_size	*size;
	int		i;

	i = 0;
	size = (t_size*)malloc(sizeof(t_size));
	while (file[i] != '\n')
		i++;
	size->x = 0;
	size->y = 0;
	size->g = 0;
	size->ec = file[i - 3];
	size->oc = file[i - 2];
	size->fc = file[i - 1];
	if (ft_nbr_nl(file) == 1)
		return (size);
	size->x = ft_nbr_nl(file) - 1;
	size->y = ft_nbr_c_bnl(file, 0);
	size->g = 0;
	return (size);
}
