CC = cc

HEADER = ./src

LIBFT_SRCS = src/ft_putchar_fd.c src/ft_putstr_fd.c

PRINTF_SRCS = src/ft_printf.c

SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS)

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wall -Wextra $(foreach dir, $(HEADER), -I$(dir))

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all