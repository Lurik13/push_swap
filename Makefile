# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lribette <lribette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:02:35 by lribette          #+#    #+#              #
#    Updated: 2023/11/24 13:49:33 by lribette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES = Printf/ft_printf.c Printf/ft_putchar.c Printf/ft_putstr.c \
		  Printf/ft_putnbr.c Printf/ft_putunbr.c Printf/ft_puthexa.c \
		  Printf/ft_putpointer.c \
		  ft_split_complements.c ft_split.c ft_strjoin.c ft_strlen.c main.c \
		  push.c rotate.c swap.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
