#include <stdio.h>

int main()
{
    unsigned int a = -1;
    int b = ~0;
    if (b == a)
        printf("equal");
    else
        printf("unequal");
    return(0);
}