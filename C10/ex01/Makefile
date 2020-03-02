# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 15:39:32 by rgilles           #+#    #+#              #
#    Updated: 2020/02/23 15:39:34 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_cat

.c.o	:	
			${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}
all		:	${OBJS}
			${CC} -o ${NAME} ${OBJS}
${NAME}	:	all
clean	:
			rm -f ${OBJS}
fclean	:	clean
			rm -f ${NAME}
re		:	fclean all
