#include <unistd.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return(0);
    while (*s1)
    {
        i = 0;
        while (s2[i])
        {
            if (*s1 == s2[i])
                return(char *)s1;
            i++;
        }
        s1++;
    }
    return(0);
}

int main()
{
    int len;
    char s[50] = "Bilgisayar";
    char a[50] = "esy";
    len = ft_strpbrk(s,a);
    printf("%d",len);
}