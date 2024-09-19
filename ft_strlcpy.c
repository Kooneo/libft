#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t src_len;
    size_t i;

    src_len = 0;
    i = 0;
    while (src[src_len] != '\0')
        src_len++;
    if (n == 0)
        return src_len;
    while (i < n - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return src_len;
}
