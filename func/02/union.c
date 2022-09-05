#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int isexist(char *str, char c)
{
    int i;
    i = 0;

    while (str[i])
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

int main(int argc, char **argv)
{
    int i,z,k;
    char s[255];

    i = 1;
    z = 0;
    k = 0;
    if (argc == 3)
    {
        while (i < 3 && argv[i][z] != '\0')
        {
            if (isexist(s, argv[i][z]))
                s[k++] = argv[i][z];
            if (argv[i][z + 1] == '\0' && i++)
                z = -1;
            z++;
        }
        s[k] = '\0';
        ft_putstr(s);
    }
    else
        write(1, "\n", 1);
}
