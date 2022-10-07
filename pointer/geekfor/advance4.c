#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void fun(char **str_ref)
{
    *str_ref++;
}

int main()
{
    char *str = (void *)malloc(100);
    strcpy(str, "GeeksQuiz");
    fun(&str);
    printf("%s",str);
    free(str);
}