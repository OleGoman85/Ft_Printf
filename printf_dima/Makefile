NAME = libftprintf.a
LIBFT = libft/libft.a
SRCS = ft_printf.c ft_switch.c ft_print_char.c ft_putchar.c ft_print_str.c ft_putstr.c \
	   ft_print_hex.c ft_numlenbase.c ft_dec_tobase.c ft_print_dec.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	ar -crs $(NAME) $(OBJ)

$(LIBFT):
	$(MAKE) -C libft/
	$(MAKE) bonus -C libft/
	cp libft/libft.a libftprintf.a

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BNS)
	 $(MAKE) clean -C libft/

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft/

re: fclean all

.PHONY: all, clean, fclean, re
