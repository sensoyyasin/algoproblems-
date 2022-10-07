#include <stdio.h>
#include <unistd.h>

int main()
{
    int arri[] = {1,2,3};
    int *ptri = arri;

    char arrc[] = {1,2,3};
    char *ptrc = arrc;

    printf("sizeof arri[] = %d\n", sizeof(arri)); //12
    printf("sizeof ptri[] = %d\n", sizeof(ptri)); //8 pointer

    printf("sizeof arrc[] = %d\n", sizeof(arrc)); //3
    printf("sizeof ptrc[] = %d\n", sizeof(ptrc)); //8 pointer
}