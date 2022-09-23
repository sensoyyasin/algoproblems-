#include <unistd.h>
#include <stdio.h>

char *ft_strrev(char *str)
{
    int i;
    int len;
    char temp;
    
    i = 0;
    len = 0;
    while (str[len])
        len++;
    len--;
    while (len > i)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return(str);
}


int main()
{
    char str[] = "YASIN";
    printf("%s", ft_strrev(str));
}