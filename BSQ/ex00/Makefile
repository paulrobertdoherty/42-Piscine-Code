# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 22:04:47 by pdoherty          #+#    #+#              #
#    Updated: 2018/07/11 19:36:35 by pdoherty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = *.c

INCLUDES = bsq.h

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I $(INCLUDES)
	gcc -o $(NAME) *.o -Wall -Werror -Wextra

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
