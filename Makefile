# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 16:04:27 by aborda            #+#    #+#              #
#    Updated: 2025/07/31 11:21:02 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a
CC =			cc
CFLAGS = 	-Wall -Wextra -Werror -I.

SRC	=			ft_strlen.c \
					ft_putchar.c \
					ft_putstr.c \
					ft_putnbr.c \

OBJ	=			${SRC:.c=.o}

all:			$(NAME)

$(NAME):	$(OBJ)
					ar rcs $(NAME) $(OBJ)

%.o: %.c
					$(CC) $(CFLAGS) -c $< -o $@

clean:
					rm -f $(OBJ)

fclean:		clean
					rm -f $(NAME)

re:				fclean all

.PHONY: 	all clean fclean re
