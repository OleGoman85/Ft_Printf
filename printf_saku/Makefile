# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 11:39:52 by svesa             #+#    #+#              #
#    Updated: 2023/11/17 15:56:21 by svesa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 

LIBFT_DIR = ./libft

LIBFT = $(LIBFT_DIR)/libft.a

SOURCES =	ft_printf.c ft_puthex.c	ft_putptr.c	ft_putnumber.c	\
			ft_putstring.c	ft_putchar.c

OBJ = ${SOURCES:.c=.o}

all: $(NAME)

$(NAME) : $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME) 
	ar -rcs $(NAME) $(OBJ) 

$(LIBFT) : 
	make -C $(LIBFT_DIR)

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean : clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)
	rm -f $(LIBFT)

re: clean all

.PHONY: all bonus clean fclean re libft
