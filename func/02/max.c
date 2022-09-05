#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     max(int *tab, unsigned int len)
{
    int i, temp;
    
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

int main()
{
    int s[20] = {1, 100, 20, -1, 0, 0};
    printf("%d", max(s, 6));
}