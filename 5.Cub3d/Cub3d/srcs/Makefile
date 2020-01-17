# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: loamar <loamar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/30 19:29:10 by loamar            #+#    #+#              #
#    Updated: 2020/01/17 14:24:50 by loamar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= test.a

CC=gcc

#check_arg.c \
../lib/gnl/get_next_line_utils.c

SRC=./parsing/parsing_map.c \
	./parsing/parsing.c \
	./check/check_arg.c \
	./parsing/parsutils.c \
	../lib/gnl/get_next_line.c \
	./check/free_and_error.c \
	./check/init.c

OBJ= $(SRC:.c=.o)

OBJ_BON= $(BONUS:.c=.o)

#FLAGS=-Wall -Wextra -Werror

INC=./INCLUDES


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

.o: .c
	@$(CC) -I$(INC) -o $@ -c $<

bonus: $(OBJ) $(OBJ_BON)
	@ar rc $(NAME) $^
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

clean_b:
	@rm -f $(OBJ_BON)

fclean: clean clean_b
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean clean_b fclean re

.SILENT: $(OBJ)
