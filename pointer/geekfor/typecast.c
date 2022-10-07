#include <stdio.h>

int main()
{
    int a = 12;
    void *ptr = (int *)&a;
    //printf("%d", *ptr);
    printf("%d", *(int *)ptr);
    return(0);
}