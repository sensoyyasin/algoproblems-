#include <stdio.h>
void f(int *p, int *q)
{
    p = q; //p also points to q
    *p = 2; //value of j is changed to 2 now
}

int i = 0;
int j = 1;
int main()
{
    f(&i,&j);
    printf("%d %d \n", i, j);
    return(0);
}