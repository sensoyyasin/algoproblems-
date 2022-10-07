#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define R 10
#define C 20

int main()
{
    int *c;
    printf("%d\n", sizeof(*c));
    int (*p)[R][C];
    printf("%d",sizeof(*p));
    return(0);
}