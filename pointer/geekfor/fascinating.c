#include <stdio.h>
int main()
{
    int a = 10;
    void *ptr = &a;
    printf("%d\n", *(int*)ptr);
    printf("%d\n", a);
   
    return 0;
}