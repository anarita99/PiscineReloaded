# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 17:55:04 by adores            #+#    #+#              #
#    Updated: 2025/04/08 11:37:25 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.h

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c 
		srcs/ft_swap.com

OBJ = $(SRC: .c = .o)

INC_DIR = ./includes/

INC = includes/ft.h

CC = CC

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR)$(NAME)$(OBJ)

%.o:%.c $(INC)
	$(CC)$(CFLAGS)-o $@ -c $< -I $(INC_DIR)

clean:
	$(RM)$(OBJ)

fclean: clean
	$(RM)$(NAME)

re: fclean all
	
	
	


