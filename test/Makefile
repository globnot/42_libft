# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 18:18:52 by aborda            #+#    #+#              #
#    Updated: 2025/08/05 18:28:13 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		test
CC = 		cc
CFLAGS = 	-Wall -Wextra -Werror -I. -I.. -I./assert
# -I. cherche les headers dans le dossier courant.
# -I.. cherche les headers dans le dossier parent.
LDFLAGS = 	-L.. -lft
# -L.. dit au linker d'aller chercher des library (libft.a).
#  -lft demande a lier la library libft.a

SRC = 		$(wildcard *.c)
SRC += 		$(wildcard assert/*.c)
OBJ = 		$(SRC:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
