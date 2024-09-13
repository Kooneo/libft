#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *p;
    unsigned char uc;

    p = str;
    uc = c;
    while (n--)
    {
        if (*p == uc)
            return ((void *)p);
        p++;
    }
    return (NULL);
}
