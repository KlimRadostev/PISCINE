/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 11:26:01 by kradoste          #+#    #+#             */
/*   Updated: 2018/03/27 20:09:44 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct			s_list
{
	void				*data;
	struct s_list		*next;
}						t_list;

t_list					*ft_create_elem(void *data);
void					ft_list_push_back(t_list **begin_list, void *data);
void					ft_list_push_front(t_list **begin_list, void *data);
int						ft_list_size(t_list *begin_list);

#endif
