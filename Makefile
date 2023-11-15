NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printf.c ft_putchar_ft.c ft_putstr_ft.c ft_putptr_ft.c ft_putnbr_ft.c proverka.c \
ft_putuni_ft.c ft_puthex_ft.c

OBJ_FILES = $(SRC_FILES:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
