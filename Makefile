NAME    = push_swap

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

SRCS    = src/swap.c src/push.c src/rotate.c src/reverse_rotate.c \
	  src/ft_split.c src/ft_atol.c src/parse.c src/utils.c src/small.c src/radix.c src/push_swap.c
OBJS    = obj/swap.o obj/push.o obj/rotate.o obj/reverse_rotate.o \
	  obj/ft_split.o obj/ft_atol.o obj/parse.o obj/utils.o obj/small.o obj/radix.o obj/push_swap.o
INC 	= push_swap.h

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -ggdb3 -I $(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | Makefile $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
