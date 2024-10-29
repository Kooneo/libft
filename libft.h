/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakour <zbakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:54:39 by zbakour           #+#    #+#             */
/*   Updated: 2024/10/25 19:00:19 by zbakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

// delete this only  for testing
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *dst, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dest_str, const void *src_str, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strchr(const char *str, int search_str);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str1, const char *str2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
int ft_atoi(const char *nptr);
void *ft_calloc(size_t nitems, size_t size);
char *ft_strdup(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_itoa(int n);

t_list *ft_lstnew(void *content);

#endif