# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 17:42:57 by ycucchi           #+#    #+#              #
#    Updated: 2021/11/03 18:38:58 by ycucchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = ./srcs/ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCES)
	gcc -o $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
