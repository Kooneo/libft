#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t dst_len;
    size_t src_len;
    size_t j;

    dst_len = 0;
    src_len = 0;
    while (dst_len < n && dst[dst_len] != '\0')
        dst_len++;
    while (src[src_len] != '\0')
        src_len++;
    if (dst_len >= n)
        return n + src_len;
    j = 0;
    while (dst_len + j < n - 1 && src[j] != '\0')
    {
        dst[dst_len + j] = src[j];
        j++;
    }
    dst[dst_len + j] = '\0';
    return (dst_len + src_len);
}
