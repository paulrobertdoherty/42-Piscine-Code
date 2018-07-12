# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 14:15:29 by pdoherty          #+#    #+#              #
#    Updated: 2018/07/05 17:17:02 by pdoherty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = cat.c ft_putstr.c ft_putchar.c

OUT = cat.o ft_putstr.o ft_putchar.o

INCLUDES = cat.h

all:
	gcc -Wall -Wextra -Werror $(SRCS) -I $(INCLUDES) -o ft_cat

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -I $(INCLUDES) -o moo
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean:	clean
	rm -f $(NAME)

re: fclean all
