#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "India\0\is Best\0";
    printf("%d\n", strlen(str));
    return 0;
}