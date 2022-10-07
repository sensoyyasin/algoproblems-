#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = "Programlar";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    memmove(cdizi1, cdizi2, 10);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}