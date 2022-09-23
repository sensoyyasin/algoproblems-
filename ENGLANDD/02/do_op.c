#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int len;

    i = 0;
    if (argc == 4)
    {
        if (argv[2][0] == '*')
            len = (atoi(argv[1]) * atoi(argv[3]));
        else if (argv[2][0] == '/')
            len = (atoi(argv[1]) / atoi(argv[3]));
        else if (argv[2][0] == '+')
            len = (atoi(argv[1]) + atoi(argv[3]));
        else if (argv[2][0] == '-')
            len = (atoi(argv[1]) - atoi(argv[3]));
        else if (argv[2][0] == '%')
            len = (atoi(argv[1]) % atoi(argv[3]));
        printf("%d", len);
        i++;
    }
    printf("\n");
}