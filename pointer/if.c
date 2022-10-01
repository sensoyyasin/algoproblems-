#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    if(str1 == str2)
        printf("Equal\n");
    else
        printf("Unequal\n");
    return 0;
}