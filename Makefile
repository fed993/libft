# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/10/14 01:21:09 by fpolyans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = *.c

OBJECTS  = *.o

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

name:
	gcc $(FLAGS) -c -I . $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS) 

all: name

debug:
	gcc -g ft_memccpy.c libft.h
	gdb ./a.out

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
