SRCS	= srcs/main.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= ft_display_file

.c.o	:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
all		:	${OBJS}
			${CC} -o ${NAME} ${OBJS}
${NAME}	:	all
clean	:
			rm -f ${OBJS}
fclean	:	clean
			rm -f ${NAME}
