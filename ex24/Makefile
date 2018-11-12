# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 19:36:37 by yomai-va          #+#    #+#              #
#    Updated: 2018/11/08 19:55:14 by yomai-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAG = -Wall -Wextra -Werror

HEADER = includes

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(FILES)

clean:
	rm -f $(FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
