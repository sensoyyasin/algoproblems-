#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    if (sizeof(char) == sizeof('x'))
        printf("%d", 10);
    else
        printf("%d\n", 20);
    printf("%d\n", sizeof(char)); //-> 1byte char oluyor
    printf("%d\n", sizeof(int)); //-> 4byte char oluyor
    printf("%d\n", sizeof('x')); //->4byte int oluyor
    printf("%d\n", sizeof('10')); //-> 4byte int oluyor
}