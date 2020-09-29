# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 00:56:13 by gpaul             #+#    #+#              #
#    Updated: 2020/09/29 23:53:23 by gpaul            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Solver

CC = gcc
CFLAGS = -Wall -Wextra -Werror -o $(NAME) -I$(INC_PATH)

SRC_PATH = ./srcs
INC_PATH = ./include

SRC_NAME =	ft_map.c \
			ft_print.c \
			ft_split.c \
			main.c \
			solver.c \

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRC)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: all clean
