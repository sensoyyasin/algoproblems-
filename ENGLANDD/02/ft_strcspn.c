#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t  ft_strcpsn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (reject[j] == s[i])
                return(i);
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
    char s[] = "Bilgisayar";
    char a[] = "esy";
    printf("%zu", ft_strcpsn(s,a));
}