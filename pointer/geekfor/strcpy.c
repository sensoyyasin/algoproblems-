#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c1[] = "Yasinaasdadsasd";
    char c2[] = "b";
    strcpy(c1,c2);
    printf("%s",c1);
}