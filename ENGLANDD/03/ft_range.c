#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int *ptr;

    if (start > end)
        i = start - end;
    else
        i = end - start;
    ptr = malloc(sizeof(int) * i + 1);
    if (ptr==NULL)
        return(NULL);
    while (i >= 0)
    {
        ptr[i] = end;
        if (start > end)
            end++;
        else
            end--;
        i--;
    }
    return(ptr);
}