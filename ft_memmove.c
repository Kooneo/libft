#include "libft.h"

void *ft_memmove(void *dest_str, const void *src_str, size_t  n)
{
    unsigned char *dest;
    const unsigned char *src;
    size_t i;

    dest = (unsigned char *)dest_str;
    src = (const unsigned char*)src_str;
    if (dest > src)
    {
        i = n - 1;
		while (i < n)
		{
			*(dest + i) = *(src + i);
			i--;
		}
    }
    else
    {
        while (n--)
        {
            *dest++ = *src++;
        }
    }
    return ((void *)dest_str);
}
