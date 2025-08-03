# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 16:04:27 by aborda            #+#    #+#              #
#    Updated: 2025/08/03 12:30:41 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			libft.a
CC =			cc
CFLAGS = 		-Wall -Wextra -Werror -I.
DEBUGFLAGS =	-g

SRC	=			ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_atoi.c \
				ft_strdup.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr_fd.c \

OBJ	=			${SRC:.c=.o}

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
				$(MAKE) CFLAGS="$(CFLAGS) $(DEBUGFLAGS)"

.PHONY: all clean fclean re debug
