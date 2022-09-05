#include <stdio.h>

void    sifirla(int arg);

int main(int argc, char **argv)
{
    int sayi = 10;
    sifirla(sayi);
    //(Call by value)değer yöntemiyle çağrıda bu fonksiyon çağrısı sonucunda sayı değeri değişmez.
    printf("sayi : %d", sayi);
    return(0);
}

void    sifirla(int arg)
{
    arg = 0;
}