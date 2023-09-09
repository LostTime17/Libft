NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = $(filter-out $(wildcard ft_lst*.c), $(wildcard ft_*.c))
OBJS = $(SRC_FILES:.c=.o)
BONUS_FILES = $(wildcard ft_lst*.c)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): libft.h

bonus: $(OBJS) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJ)

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus