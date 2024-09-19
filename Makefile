LIBRARY = libft
NAME = $(LIBRARY).a
CC = cc
FLAGS = -std=c99 -Wall -Wextra -Werror
HEADER = $(LIBRARY).h
CFILES = $(filter-out main.c, $(filter-out _bonus.c, $(wildcard *.c)))
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $@ $^
	@echo "Static library $(NAME) created."

$(OFILES): %.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	@echo "Cleaned up."

re: fclean all

test: $(NAME)
	$(CC) -o main main.c -L. -l$(LIBRARY:lib%=%) && ./main && rm -f main

.PHONY: all clean fclean re test
