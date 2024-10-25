LIBRARY = libft
NAME = $(LIBRARY).a
CC = cc
FLAGS = -Wall -Wextra -Werror 
HEADER = $(LIBRARY).h
CFILES = $(filter-out main.c _bonus.c, $(wildcard *.c))
OFILES = $(CFILES:.c=.o)
all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $@ $^
	@tput setaf 6 && echo "Static library $(NAME) created."

%.o: %.c $(HEADER)
	@tput setaf 3 && $(CC) $(FLAGS) -I . -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
	@tput setaf 6 && echo "Cleaned up."
	
re: fclean all

test: $(NAME)
	@tput setaf 6 && $(CC) $(FLAGS) -o main main.c -L. -l$(LIBRARY:lib%=%) && ./main && rm -f main

.PHONY: all clean fclean re test
