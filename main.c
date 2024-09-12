#include "libft.h"
#include <stdio.h>

int main()
{
    const char str[] = "";
   // "ch" is search string
   const char ch = 't';
   char *ret;
   ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}
