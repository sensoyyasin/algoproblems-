#include <unistd.h>
#include <stdio.h>

int main()
{
    char *ptr = "GeeksQuiz";
    printf("%c\n", *&*&*ptr);
    return 0;
}