#include "libft.h"

void ft_bzero(void *dst, size_t n)
{
    unsigned char *p;

    p = dst;
    while (n--)
    {
        *p = 0;
        p++;
    }
}
