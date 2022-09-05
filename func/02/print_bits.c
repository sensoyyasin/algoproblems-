#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int sayi = 128;

    while (sayi > 0)
    {
        if (octet >= sayi)
        {
            write(1, "1", 1);
            octet = sayi % octet;
        }
        else
            write(1, "0", 1);
        sayi /= 2;
    }
    
}

int main()
{
    print_bits(2);
}
    