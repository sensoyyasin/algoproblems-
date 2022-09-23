#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    int a;

    a = 1;
    while (n >= a)
    {
        if (n == a)
            return(1);
        else
            a *= 2;
    }
    return(0);
}