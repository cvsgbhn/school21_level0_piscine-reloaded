# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/06 17:54:42 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "ft_display_file"

SOURCES = ./ft_display_file.c ./ft_putchar.c ./ft_putnbr.c ./ft_putstr.c

OBJECTS = ./ft_display_file.o ./ft_putchar.o ./ft_putnbr.o ./ft_putstr.o

INCLUDES = ./ft_display.h

.PHONY: all clean fclean re

all: display_file 

display_file: 
	gcc -c -Wall -Wextra -Werror $(SOURCES) -I $(INCLUDES)
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
