
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int s_index;
    int e_index;
    size_t string_lenght;

    // string_lenght = ft_strlen(s1) - (ft_strlen(set));
    s_index = 0;
    e_index = strlen(s1) - 1;

    while (s1[s_index] != '\0' && set[s_index] == s1[s_index] && set[s_index] != '\0')
    {
        s_index++;
    }

    printf("Start index: %d, \n", s_index);   
    int j = 0;
    while (e_index >= 0 &&  set[j] != '\0' && set[j] == s1[e_index])
    {
        e_index--;
        j++;
    }
    printf("end index: %d, \n", e_index);   
    return (NULL);
}

int main()
{
    const char str[] = "+++Hell++";

    ft_strtrim(str, "+++");
}