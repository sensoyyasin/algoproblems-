#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "basic";
    char *s = str;
    printf("%s", s++ +3);
    printf("%s", s);
    return(0);
}