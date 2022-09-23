#include <unistd.h>

int    isexist(char *str, char c)
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

int main(int argc, char **argv)
{
    int z,k;
    char s[255];

    z = 0;
    k = 0;
    if (argc == 3)
    {
        while (argv[1][z])
        {
            if (isexist(s, argv[1][z]) && !isexist(argv[2], argv[1][z]))
                s[k++] = argv[1][z];
            z++;
        }
        s[k] = '\0';
        ft_putstr(s);
    }
    else
        write(1, "\n", 1);
}