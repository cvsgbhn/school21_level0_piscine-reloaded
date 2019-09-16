# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/06 16:08:54 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCDIR = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HDRDIR = ./includes

FLAGS = -Wall -Wextra -Werror

OS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCDIR) -I $(HDRDIR)
	ar rc $(NAME) $(OS)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all


