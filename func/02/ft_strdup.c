#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i])
        i++;
    dest = (char *)malloc(i + 1);
    if (!dest)
        return(NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}