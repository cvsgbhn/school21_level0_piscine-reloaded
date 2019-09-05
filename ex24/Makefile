# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/05 18:43:30 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft"

INCLUDES = ./includes

SOURCES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJECTS = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

all: libft

libft: 
	gcc -c -Wall -Wextra -Werror $(SOURCES) -I $(INCLUDES)
	ar rcs libft.a $(OBJECTS)

.PHONY: clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean libft



