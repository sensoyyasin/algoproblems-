#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char kelime1[20] = "Kutuphane";
    char kelime2[20] = "Kitapci"; 

    strncat(kelime1, kelime2 + 5, 2);
    puts(kelime1);
    return(0);
}