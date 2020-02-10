/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 17:54:50 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/26 17:59:13 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			n++;
		i++;
	}
	return (n);
}