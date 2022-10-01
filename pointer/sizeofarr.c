#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {12,13,14,15,16};
    printf("%d, %d, %d\n", sizeof(arr), sizeof(*arr), sizeof(arr[0]));
    return(0);
}