SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

LIB = ar rc

LIBS = ranlib

HEAD = ./includes

CC = gcc

RM = rm -f

CFLAGS =  -Wall -Wextra -Werror

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

all : ${NAME}

${NAME} : ${OBJS}
			${LIB} ${NAME} ${OBJS}
			${LIBS} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re : fclean all

.PHONY:	all clean fclean re
