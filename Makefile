NAME    = push_swap
SRCS    = swap.c push.c rotate.c reverse_rotate.c ft_split.c ft_atol.c parse.c utils.c small.c radix.c push_swap.c 
OBJS    = $(SRCS:.c=.o)
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -ggdb3

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c Makefile push_swap.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
