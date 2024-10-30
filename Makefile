LIBRARY = libft
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror 
HEADER = $(LIBRARY).h
CFILES = $(filter-out main.c _bonus.c, $(wildcard *.c))
OFILES = $(CFILES:.c=.o)
all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $@ $^
	@echo "Static library $(NAME) created."

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I . -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	@echo "Cleaned up."
	
re: fclean all

test: $(NAME)
	$(CC) $(FLAGS) -o main main.c -L. -l$(LIBRARY:lib%=%) && ./main && rm -f main

.PHONY: all clean fclean re test
