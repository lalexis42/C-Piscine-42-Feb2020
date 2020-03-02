# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/22 10:32:54 by rgilles           #+#    #+#              #
#    Updated: 2020/02/23 20:36:15 by frchaban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCL	= includes
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= rush-02

.c.o :	
			${CC} -I${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}

all :		${OBJS}
			${CC} -o ${NAME} ${OBJS}

${NAME} :	all

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all
	
.PHONY :	all ${NAME} clean fclean re
