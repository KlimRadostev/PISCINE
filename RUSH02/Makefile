#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 16:52:27 by kradoste          #+#    #+#              #
#    Updated: 2018/04/01 19:18:34 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FLAG = -Wall -Wextra -Werror -o
NAME = rush-2
SRCS =	*.c\

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(NAME) $(SRCS)

clean:
		/bin/rm -f *.o
		/bin/rm -f *~
		/bin/rm -f /#*/#

fclean: clean
		/bin/rm -f $(NAME)

re: clean all