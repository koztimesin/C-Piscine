# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksaffron <ksaffron@student.21-schoo>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 19:27:07 by ksaffron          #+#    #+#              #
#    Updated: 2021/09/12 20:57:02 by ksaffron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

FLAG = gcc

FLAGS = -Wall -Wextra -Werror

SRC_DIR =  "./srcs/"

OBJECTS = $(LIST:.c=.o)

HEADER = -I "./includes/"

OBJ = $(patsubst *.c, *.o, ${LIST})

all : ${NAME}

${NAME} : ${OBJ}
	ar rcs ${NAME} $?

CPM :
	${FLAG} ${FLAGS} -c $< -o $

clean :
	rm -f ${OBJ}

fclean : ${clean}
	rm -f ${NAME}

re : ${fclean}
