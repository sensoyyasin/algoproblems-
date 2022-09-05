#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **tab;

    i = 0;
    j = 0;
    k = 0;
    while (str[i] == '\0' && str[i] <= 32)
        i++;
    tab = malloc(sizeof(char **) * 1000);
    while (str[i] != '\0')
    {
        if (str[i] && str[i] > 32)
        {
            tab[j] = malloc(sizeof(char *) * 1000);
            while (str[i] != '\0' && str[i] > 32)
            {
                tab[j][k] = str[i];
                i++;
                k++;
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