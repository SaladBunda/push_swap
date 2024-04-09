SRCS = main.c ft_split.c util_func1.c util_func2.c operations.c operations2.c sort.c range.c extra_sort.c
SRCB = main_bonus.c ft_split_bonus.c util_func1_bonus.c util_func2_bonus.c util_func3_bonus.c operations_bonus.c operations2_bonus.c operations3_bonus.c sort_bonus.c range_bonus.c extra_sort_bonus.c get_next_line_bonus.c checker_bonus.c
DIR = ./srcs/
BONUS_DIR = ./bonus/
OBJS = $(SRCS:%.c=$(DIR)%.o)
OBJB = $(SRCB:%.c=$(BONUS_DIR)%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BONUS_NAME = checker

all: $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJB) $(BONUS_DIR)push_swap_bonus.h
	$(CC) $(OBJB) $(IFLAGS) -o $(BONUS_NAME)

$(NAME): $(OBJS) $(DIR)push_swap.h
	$(CC) $(OBJS) $(IFLAGS) -o $(NAME)

$(DIR)%.o: $(DIR)%.c $(DIR)push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_DIR)%.o: $(BONUS_DIR)%.c $(BONUS_DIR)push_swap_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJB)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all
