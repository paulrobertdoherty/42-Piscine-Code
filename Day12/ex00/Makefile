# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdoherty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 14:15:29 by pdoherty          #+#    #+#              #
#    Updated: 2018/07/05 16:35:34 by pdoherty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_display_file.c ft_putstr.c ft_putchar.c

OUT = ft_display_file.o ft_putstr.o ft_putchar.o

INCLUDES = ft_display_file.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -I $(INCLUDES) -o ft_display_file
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean:	clean
	rm -f $(NAME)

re: fclean all
