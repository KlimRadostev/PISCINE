/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:09:55 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/26 21:14:59 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, int i, int j)
{
	char *key;

	key = a[i];
	a[i] = a[j];
	a[j] = key;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int n;

	i = 0;
	while (tab[i])
	{
		n = i;
		while (tab[n])
		{
			if (cmp(tab[i], tab[n]) > 0)
				ft_swap(tab, i, n);
			n++;
		}
		i++;
	}
}
