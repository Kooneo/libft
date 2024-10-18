#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char dest1[20] = "Hello ";
    char dest2[20] = "Hello ";
    char dest3[20] = "Hello ";
    char dest4[5] = "Hi";
    const char *src = "World!";
    size_t result;

    // Test case 1: Normal concatenation
    result = ft_strlcat(dest1, src, sizeof(dest1));
    printf("Test 1:\n");
    printf("Result: %zu\n", result);
    printf("Destination: %s\n\n", dest1);

    // Test case 2: Truncation
    result = ft_strlcat(dest2, src, 10);
    printf("Test 2:\n");
    printf("Result: %zu\n", result);
    printf("Destination: %s\n\n", dest2);

    // Test case 3: No space for concatenation
    result = ft_strlcat(dest3, src, 6);
    printf("Test 3:\n");
    printf("Result: %zu\n", result);
    printf("Destination: %s\n\n", dest3);

    // Test case 4: Destination buffer too small
    result = ft_strlcat(dest4, src, sizeof(dest4));
    printf("Test 4:\n");
    printf("Result: %zu\n", result);
    printf("Destination: %s\n\n", dest4);

    return 0;
}
