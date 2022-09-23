#include <unistd.h>
#include <stdio.h>

void    print_bits(unsigned char octet)
{
    int i;

    i = 128;
    while (i > 0)
    {
        if (octet >= i)
        {
            write(1, "1", 1);
            octet = i % octet;
        }
        else
            write(1, "0", 1);
        i /= 2;
    }   
}

int main(void)
{
	print_bits(0);
	return (0);
}