CC = cc

HEADER = ./src/libft ./

LIBFT_SRCS = src/libft/ft_atoi.c	src/libft/ft_toupper.c	src/libft/ft_tolower.c	src/libft/ft_isascii.c	src/libft/ft_isdigit.c	src/libft/ft_strncmp.c	src/libft/ft_isalpha.c		src/libft/ft_isalnum.c	src/libft/ft_isprint.c\
	src/libft/ft_strlcpy.c	src/libft/ft_strrchr.c	src/libft/ft_strchr.c		src/libft/ft_memchr.c		src/libft/ft_memcmp.c		src/libft/ft_memmove.c	src/libft/ft_memset.c			src/libft/ft_strlen.c		src/libft/ft_strlcat.c\
	src/libft/ft_strnstr.c	src/libft/ft_calloc.c		src/libft/ft_bzero.c		src/libft/ft_memcpy.c		src/libft/ft_substr.c		src/libft/ft_strjoin.c	src/libft/ft_strdup.c			src/libft/ft_strtrim.c	src/libft/ft_split.c\
	src/libft/ft_itoa.c		src/libft/ft_strmapi.c	src/libft/ft_striteri.c	src/libft/ft_putchar_fd.c	src/libft/ft_putstr_fd.c	src/libft/ft_putnbr_fd.c	src/libft/ft_putendl_fd.c		

PRINTF_SRCS = src/ft_printf.c 	src/utils/ft_printf_utils.c		src/utils/ft_printf_parser.c

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