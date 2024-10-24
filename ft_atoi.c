int ft_atoi(const char *nptr)
{
    int sign;
    int i;
    int total;

    total = 0;
    i = 0;
    sign = 1;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || 
           nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
    {
        i++;
    }
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
    {
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        total = total * 10 + (nptr[i] - '0');
        i++;
    }
    return total * sign;
}
