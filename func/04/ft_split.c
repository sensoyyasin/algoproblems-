#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **tab;

    i = 0;
    j = 0;
    k = 0;
    tab = malloc(sizeof(char **) * 1000);
    while (str[i] <= 32 && str[i] != '\0')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] > 32 && str[i] != '\0')
        {
            tab[j] = malloc(sizeof(char *) * 1000);
            while (str[i] > 32 && str[i] != '\0')
            {
                tab[j][k] = str[i];
                k++;
                i++;
            }
            tab[j][k] = '\0';
            j++;
            k = 0;
        }
        else
            i++;
    }
    tab[j] = NULL;
    return(tab);
}

int main()
{
    char s[22] = "   burak ersoy   aabb";
    char **str;
    str = ft_split(s);
    printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
    return(0);
}