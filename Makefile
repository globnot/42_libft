# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 16:04:27 by aborda            #+#    #+#              #
#    Updated: 2025/08/01 13:06:48 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			libft.a
CC =			cc
CFLAGS = 		-Wall -Wextra -Werror -I.
DEBUGFLAGS =	-g

SRC	=			ft_strlen.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putnbr.c \
				ft_swapint.c \
				ft_swapstr.c \
				ft_strdup.c \

OBJ	=			${SRC:.c=.o}

allclean:		all clean
all:			$(NAME)

$(NAME):		$(OBJ)
				ar rcs $(NAME) $(OBJ)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

debug:			fclean
				$(MAKE) CFLAGS="$(CFLAGS) $(DEBUGFLAGS)" allclean

.PHONY: all clean fclean re debug
