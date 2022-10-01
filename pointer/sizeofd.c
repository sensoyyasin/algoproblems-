#include <stdio.h>

int main()
{
    int a = 1;
    printf("sizeof a is %d\n", sizeof(++a));
    printf("sizeof a is %d\n", sizeof(++a));
    printf("value of a is %d", a);
}