#include <stdio.h>

int main()
{
    int a =10,b=25;
    a = b++ + a++;
    b = ++b + ++a;

    printf("%d\n%d\n",a,b);
}