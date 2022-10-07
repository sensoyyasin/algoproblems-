#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void fun(char ** str_ref)
{
    (*str_ref)++; //bu ok eeksQuiz basar
    //str_ref++ olsaydı Bir şey değişmediği için GeeksQuiz basacaktı.
}

int main()
{
    char *str = (void *)malloc(100 * sizeof(char));
    strcpy(str, "GeeksQuiz");
    fun(&str);
    puts(str);
    return(0);
}