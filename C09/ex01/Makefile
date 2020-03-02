# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 13:06:33 by rgilles           #+#    #+#              #
#    Updated: 2020/02/20 13:06:38 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY: all clean fclean re