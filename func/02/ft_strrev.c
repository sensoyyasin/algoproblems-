#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strrev(char *str)
{
    int i,len;
    char *temp;

    i = 0;
    while (str[i])
        i++;
    len = i;
    len--;
    i = 0;
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
    }
    return(str);
}

int main()
{
    char s[50] = "yasin";
    printf("%s",ft_strrev(s));
}