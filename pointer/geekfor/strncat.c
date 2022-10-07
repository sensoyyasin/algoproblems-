#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char c[] = "Bilgisayar";
    char c2[] = " Programlama";

    strncat(c,c2,4);
    printf("%s\n", c);
}