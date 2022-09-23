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
    if (!tab)
        return(0);
    while (str[i] <= 32)
        i++;
    while (str[i])
    {
        if (str[i] && str[i] > 32)
        {
            tab[j] = malloc(sizeof(char *) * 1000);
            while (str[i] && str[i] > 32)
            {
                tab[j][k] = str[i];
                k++;
                i++;
            }
            tab[j][k] = '\0';
            k = 0;
            j++;
        }
        else
            i++;
    }
    tab[j] = NULL;
    return(tab);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    char **str;

    i = 0;
    if (argc == 2)
    {
        str = ft_split(argv[1]);
        while (str[i])
            i++;
        i--;
        while (str[i])
        {
            ft_putstr(str[i]);
            if (str[i - 1])
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
}