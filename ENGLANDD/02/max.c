#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i;
    int temp;

    i = 0;
    temp = tab[i];
    while (len > i)
    {
        if (tab[i] > temp)
            temp = tab[i];
        i++;
    }
    return(temp);
}