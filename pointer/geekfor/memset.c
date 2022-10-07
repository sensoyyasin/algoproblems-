#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[] = "Bilgisayar";
    memset(c, 'x', 5);
    printf("%s",c);
}