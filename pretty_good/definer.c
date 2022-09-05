#include <stdio.h>
#define PRODUCT(x) (x*x*x*x)

int main()
{
    int x = 2;
    int result = PRODUCT(x++);
    printf("%d %d", x, result);
    return(0);
}