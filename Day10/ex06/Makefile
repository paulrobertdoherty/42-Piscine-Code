# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 14:15:29 by pdoherty          #+#    #+#              #
#    Updated: 2018/07/03 18:32:21 by pdoherty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = do_op.c ft_atoi.c ft_putnbr.c functions.c ft_putchar.c ft_putstr.c

OUT = do_op.o ft_atoi.o ft_putnbr.o functions.o ft_putchar.o ft_putstr.o

INCLUDES = do_op.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ./*.c -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean:	clean
	rm -f $(NAME)

re: fclean all
