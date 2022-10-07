#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = "ferhatlar ve köpekler giremez";
    char *result;

    result = strdup(str);
    int a = strcmp(str, result);
    if (a != 0)
        printf("%c", str[3]);
    else
        printf("%c",48);
}