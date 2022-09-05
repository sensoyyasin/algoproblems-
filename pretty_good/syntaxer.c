#include <stdio.h>

int main()
{
    int arr[3][3] = {6,2,3,4};
    printf("%d", *(*(arr)));
    return(0);
}