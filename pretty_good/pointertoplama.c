#include <unistd.h>
#include <stdio.h>

int *ptr1, *ptr2, *ptr3;
int sayi1 = 5;
int sayi2 = 6;
ptr1 = &sayi1;
ptr2 = &sayi2;
//aşağıdakiler hatali
//ptr3 = ptr1 + ptr2;
//ptr3 = ptr1 - ptr2;
//işaretçiler adres tutarlar.İki adresi toplamanın veya çarpmanın bir mantığı yoktur.
//çıkarma illegal bir işlem pointerlarda.
