#include <unistd.h>
#include <stdio.h>

int change(int x)
{
    x = 7;
    return(0);
}

int main()
{
    int x = 5;
    change(x);
    printf("%d", x);
    return(0);
}