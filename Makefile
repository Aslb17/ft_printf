# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 10:22:22 by ade-cham          #+#    #+#              #
#    Updated: 2020/11/24 10:22:36 by ade-cham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT		=	./libft/libft.a
INCLUDES	=	-I./includes

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

SRCS		=	./src/ft_printf.c
SRCS		+=	./src/ft_outils.c


OBJS		=	${SRCS:.c=.o}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} $(INCLUDES) -g -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	make -C ./libft
	cp libft/libft.a ./$(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	make fclean -C ./libft
	${RM} ${NAME}

re:	fclean all

.PHONY : all clean fclean re
