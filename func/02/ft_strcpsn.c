#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return(j);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i])
        i++;
    return(i);
    
}

int main()
{
    int len;
    char s[50] = "Bilgisayar";
    char a[50] = "esy";
    len = ft_strcspn(s,a);
    printf("%d",len);
}