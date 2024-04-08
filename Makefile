SRCS = main.c ft_split.c util_func1.c util_func2.c operations.c operations2.c sort.c range.c extra_sort.c
# SRCB = 
DIR = ./srcs/
BONUS_DIR = ./bonus/
OBJS = $(SRCS:%.c=$(DIR)%.o)
# OBJB = $(SRCB:%.c=$(BONUS_DIR)%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
# BONUS_NAME = so_long_bonus

all: $(NAME)

# bonus: $(BONUS_NAME)

# $(BONUS_NAME): $(OBJB) $(BONUS_DIR)so_long_bonus.h
# 	$(CC) $(OBJB) $(IFLAGS) -o $(BONUS_NAME)

$(NAME): $(OBJS) $(DIR)push_swap.h
	$(CC) $(OBJS) $(IFLAGS) -o $(NAME)

$(DIR)%.o: $(DIR)%.c $(DIR)push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

# $(BONUS_DIR)%.o: $(BONUS_DIR)%.c $(BONUS_DIR)so_long_bonus.h
# 	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
