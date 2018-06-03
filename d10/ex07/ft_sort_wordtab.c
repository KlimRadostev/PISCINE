/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:44:09 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/26 21:05:12 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, int i, int j)
{
	char *key;

	key = a[i];
	a[i] = a[j];
	a[j] = key;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int n;

	i = 0;
	while (tab[i])
	{
		n = i;
		while (tab[n])
		{
			if (ft_strcmp(tab[i], tab[n]) > 0)
				ft_swap(tab, i, n);
			n++;
		}
		i++;
	}
}
