#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
    int len;
    int n_tmp;
    char *str;

    len = 0;
    n_tmp = nbr;
    str[len] = '\0';
    if (nbr == -2147483648)
        return("-2147483648");
    if (nbr == 0)
    {
        str[0] = '0';
        return(str);
    }
    if (nbr < 0)
    {
        len++;
        nbr *= -1;
        str[0] = '-';
    }
    while (n_tmp)
    {
        n_tmp /= 10;
        len++;
    }
    while (nbr)
    {
        str[--len] = (nbr % 10) + 48;
        nbr /= 10;
    }
    return(str);
}