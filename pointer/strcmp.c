#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "Syeraa";
    char str2[] = "NarasimhaReddu";
    printf("%d",strcmp(str1,str2));
    //strcmp str1 ile str2yi karsilastirir ve farkini dönderir.
    //eger tüm karakterler ayni ise 0 degerini
    //ayni olmadigi char'in asciideki farkini donderir.
}