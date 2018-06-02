/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:50:39 by shlee             #+#    #+#             */
/*   Updated: 2018/04/04 12:44:46 by shlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_size
{
	int		x;
	int		y;
	int		g;
	char	ec;
	char	oc;
	char	fc;
}				t_size;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putarray(char **map);
int				ft_strlen(char *str);
int				ft_nbr_nl(char *file);
int				ft_nbr_c_bnl(char *file, int x);
int				ft_check_valid(char **map, t_size *size);
char			*ft_strcat(char *dest, char *src);
char			**ft_map(char *file, int i);
char			**ft_mod_array(char **map, t_size *size);
t_size			*ft_variables(char *file);
t_size			*number_equation(char **map, t_size *size);

#endif
