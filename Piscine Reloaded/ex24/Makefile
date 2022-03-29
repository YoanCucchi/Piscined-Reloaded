# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 16:31:36 by ycucchi           #+#    #+#              #
#    Updated: 2021/11/03 18:22:57 by ycucchi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = ./includes/*.h

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c \
srcs/ft_strlen.c

all: $(NAME)

$(NAME): 
	gcc -Wall -Werror -Wextra -c $(HEADERS) $(SOURCES) $(HEADERS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
