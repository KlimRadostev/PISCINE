# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shlee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 13:47:29 by shlee             #+#    #+#              #
#    Updated: 2018/04/02 22:31:46 by shlee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = map_generator
SRCDIR = ../srcs
HEADERDIR = ../includes
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	gcc -I $(HEADERDIR) -c $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcat.c main.c
	gcc -o $(NAME) *.o $(CFLAG)

.PHONY : clean fclean re

clean :
	/bin/rm -f *.o
	/bin/rm -f *~

fclean : clean
	/bin/rm -f $(NAME)
	/bin/rm -f map

re : fclean all
