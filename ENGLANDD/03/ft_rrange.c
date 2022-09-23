#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int *temp;

    if (start > end)
        i = start - end;
    else
        i = end - start;
    temp = malloc(sizeof(int) * i + 1);
    if (temp == NULL)
        return(NULL);
    while (i >= 0)
    {
        temp[i] = start;
        if (start > end)
            start--;
        else
            start++;
        i--;
    }
    return(temp);
}

int main()
{
    int *str;
    int i;

    i = 0;

    str = ft_rrange(4,1);
    while (i <= 3)
    {
        printf("%d", str[i]);
        i++;
    }
}