#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{

    char str[50];

    strcpy(str, "");
    puts(str);

    ft_memset(str, '#', 7);
    puts(str);

    return(0);
}
