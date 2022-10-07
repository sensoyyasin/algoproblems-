#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char cp[] = "bilgisayar";
	char cd = 'g';
	printf("%c karakterin bellek adresi %p\n", cd, memchr(cp, cd, 4));
	return 0;
}