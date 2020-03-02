# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 15:45:54 by rgilles           #+#    #+#              #
#    Updated: 2020/02/21 15:45:55 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op

.c.o :	
			${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}
all :		${OBJS}
			${CC} -o ${NAME} ${OBJS}
clean :
			rm -f ${OBJS}
fclean :	clean
			rm -f ${NAME}
re :		fclean all
