#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 3;
    printf("%d%d%d",i++,i,++i);
}