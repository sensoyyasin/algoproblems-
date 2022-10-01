#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 25;
    int *ptr = &x;

    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);
    printf("%p\n",&x);
}