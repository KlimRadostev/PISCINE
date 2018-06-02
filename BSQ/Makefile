# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shlee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 13:47:29 by shlee             #+#    #+#              #
#    Updated: 2018/04/02 13:48:00 by shlee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCDIR = srcs
HEADERDIR = includes
CFLAG = -Wall -Wextra -Werror

all : $(NAME)

SOURCE := $(wildcard $(SRCDIR)/*.c)

INCLUDE := $(wildcard $(HEADERDIR)/*.h)

$(NAME) :
	gcc -I $(HEADERDIR) -c $(SOURCE)
	gcc -o $(NAME) *.o $(CFLAG)

.PHONY : clean fclean re

clean :
	/bin/rm -f *.o
	/bin/rm -f *~

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
