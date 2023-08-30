NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source n Object files
SRC_FILES = $(filter-out $(wildcard ft_lst*_bonus.c), $(wildcard ft_*.c))
OBJS = $(SRC_FILES:.c=.o)
BONUS_FILES = $(wildcard ft_lst*_bonus.c)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

all: $(NAME)

# Create library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
# Complie rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Header
$(OBJS): libft.h

# Complie bonus
bonus: $(OBJS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus