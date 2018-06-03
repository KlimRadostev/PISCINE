#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 15:12:03 by kradoste          #+#    #+#              #
#    Updated: 2018/03/29 11:35:37 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_cat
CFLAG = -Wall -Wextra -Werror

all : make_file

make_file:
	gcc -o $(NAME) *.c $(CFLAG)

.PHONY = clean fclean
clean :
	/bin/rm -f *.o
	/bin/rm -f *~

fclean :
	/bin/rm -f $(NAME)