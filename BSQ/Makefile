# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpommier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 20:39:54 by bpommier          #+#    #+#              #
#    Updated: 2022/06/29 20:39:55 by bpommier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= check_map.c create_tab.c ft_change.c ft_cmp_cpy.c ft_dimensions.c ft_put.c main.c square.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
