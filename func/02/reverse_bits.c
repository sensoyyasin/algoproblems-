#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
   int i = 8;
   unsigned char result;
   while (i > 0)
   {
       result = result * 2 + (octet % 2);
       octet = octet / 2;
       i--;
   }
   return(result);
}

int     main()
{
	printf("%d", reverse_bits(1));
	return (0);
}