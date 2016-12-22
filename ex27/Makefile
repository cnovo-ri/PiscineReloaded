# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnovo-ri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/18 13:40:26 by cnovo-ri          #+#    #+#              #
#    Updated: 2016/11/19 16:28:28 by cnovo-ri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c main.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_display_file.o main.o ft_putchar.o ft_putstr.o

clean :
	/bin/rm -rf ft_display_file.o main.o ft_putchar.o ft_putstr.o

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all
