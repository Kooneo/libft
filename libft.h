#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stddef.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
unsigned int ft_strlen(const char* str);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *str, int search_str);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
void *ft_memset(void *str, int c, size_t n);


#endif
