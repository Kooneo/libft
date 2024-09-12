#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
unsigned int ft_strlen(const char* str);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *str, int search_str);


#endif
