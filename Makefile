# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 00:00:42 by fpolyans          #+#    #+#              #
#    Updated: 2017/09/27 21:57:20 by fpolyans         ###   ########.fr        #
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
	gcc -g $(FLAGS) $(SOURCES) $(MAIN)
	gdb ./a.out $(DEBUG_ARGS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
