#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 50;
    int *p = &x;
    int y = *p;

    printf("%d",y);
}