#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 3;
    int *j;
    int k;
    j = &i;
    printf("%d\n", i**j*i+*j);
    return(0);
}