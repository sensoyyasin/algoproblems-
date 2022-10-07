#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char *c1 = "Bilgisayar";
    char *c2 = "Bilgileri";
    int ret;

    ret = strcmp(c1,c2);
    printf("%d\n",ret);
}