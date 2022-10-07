#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int x(char c)
{
    write(1, &c, 1); //d basti
    return(1);
}

int blabla(unsigned int n)
{
    int i;
    int a;

    i = 0;
    n = 'c' % 43;
    if (n > 12)
    {
        i = i + x('a' + n - 10);
    }
    return(55); // 7returnledi.
}

int main()
{
    printf("%c",blabla(15));
}