NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRCS = $(addprefix ft_, $(addsuffix .c, base_10 base_16 char printf))
OBJS = $(SRCS:.c=.o)
HEADER = ft_printf.h

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re