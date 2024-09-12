#include "libft.h"

char *ft_strchr(const char *str, int search_str)
{
    int i;

    i = 0;
    while (*(str + i) != (char)search_str)
    {
        if (*(str + i) == '\0')
            return (NULL);
        i++;
    }

    return ((char *)str + i);
}
