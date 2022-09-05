#include <stdio.h>

void sifirla(int *);

int main(int argc, char **argv)
{
    int sayi = 10;
    sifirla(&sayi);
    //Call by reference yöntemi: Bu yöntem ilgili değişkenin bellek adresini
    //kullandığı için fonksiyon içerisindeki değişiklik sayi değişkenini değerini de değiştirir.
    printf("sayi : %d", sayi);
    return(0);
}

void sifirla(int *arg)
{
    *arg = 0;
}