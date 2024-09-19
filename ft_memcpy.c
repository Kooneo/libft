#include "libft.h"

void *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    unsigned char *dest;
    const unsigned char *src;

    dest = (unsigned char *)dest_str;
    src = (const unsigned char *)src_str;
    while (n--)
    {
        *dest++ = *src++;
    }
    return ((void *)dest_str);
}
