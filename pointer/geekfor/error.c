#include "stdlib.h"
int main()
{
 int *pInt;
 int **ppInt1;
 int **ppInt2;
 
 pInt = (int*)malloc(sizeof(int));
 ppInt1 = (int**)malloc(10*sizeof(int*));
 ppInt2 = (int**)malloc(10*sizeof(int*));
 
 free(pInt);
 free(*ppInt1);
 free(*ppInt2);
 return 0;
}