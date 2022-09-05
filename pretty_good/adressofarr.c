#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int dizi[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int *ptr = &dizi[0];
    int *ptr2 = dizi;
    int i;
    printf("Dizi elemani : %d\n",dizi[0]);
    printf("Dizi elemani : %d\n",*ptr);
    printf("Dizi elemani : %d\n", *ptr2);

    printf("Dizi elemani : %d\n",dizi[4]);
    printf("Dizi elemani : %d\n",*(ptr + 4));
    printf("Dizi elemani : %d\n",*(ptr2 + 4));

    printf("Dizi elemani : %d\n",dizi[8]);
    printf("Dizi elemani : %d\n",*(ptr + 8));
    printf("Dizi elemani : %d\n",*(ptr2 + 8));
    return(0);

}



//*ptr = &dizi[0] = *ptr2 = dizi; dizinin ilk elemanina erişirler.
//*(ptr + 4) demek ptr[4] demek.