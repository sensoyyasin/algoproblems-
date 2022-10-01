#include <unistd.h>
#include <stdio.h>

int call(int address)
{
    address++;
    return(address);
}

void main()
{
    static main;
    int x;
    x = call(main);
    printf("%d",x);
}

