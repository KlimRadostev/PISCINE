#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 13:16:30 by kradoste          #+#    #+#              #
#    Updated: 2018/04/02 13:45:43 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr
SRCS = Srcs/*.c

all : make_file

make_file:
		gcc -g $(SRCS) -o $(NAME)  -I Includes

.PHONY = clean fclean
clean :
		/bin/rm -f *.o
		/bin/rm -f *.c~
		/bin/rm -f /#*/#
fclean:
		/bin/rm -f $(NAME)
re:
	fclean all