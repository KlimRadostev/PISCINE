#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 16:16:29 by kradoste          #+#    #+#              #
#    Updated: 2018/03/26 17:21:47 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIB = libft.a
SRCS = srcs/*.c
HEADER = includes

all: make_lib

make_lib:
		gcc -I$(HEADER) -c $(SRCS)
		ar rc $(LIB) *.o
		ranlib $(LIB)

.PHONY: clean fclean re

clean:
		/bin/rm -f *.o
		/bin/rm -f *~

fclean: clean
		/bin/rm -f $(LIB)

re: fclean all