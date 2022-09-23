#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int n;

    i = 2;
    if (argc == 2)
    {
        n = atoi(argv[1]);
        if (n == 1)
            printf("1");
        while (n >= i)
        {
            if (n % i == 0)
            {
                printf("%d",i);
                if (n == i)
                    break;
                printf("*");
                n = n / i;
                i = 2;
            }
            else
                i++;
        }
        
    }
    printf("\n");
}