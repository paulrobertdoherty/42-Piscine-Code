# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 14:15:29 by pdoherty          #+#    #+#              #
#    Updated: 2018/07/10 22:08:05 by pdoherty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRCS = *.c

INCLUDES = eval_expr.h

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I $(INCLUDES)
	gcc -o $(NAME) *.o -Wall -Wextra -Werror

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re: fclean all
