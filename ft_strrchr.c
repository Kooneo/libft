#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;
    const char *start;

    start = str;
    i = 0;
    while (str[i])
    {
        i++;
        str++;
    }
    i = 0;
    while (*(str - i) != *(start))
    {
        if (*(str - i) == (char)c)
            return ((char *)str - i);
        i++;
    }
    return (NULL);
}
