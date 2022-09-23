#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strrev(char *str)
{
	int i = 0;
	int length = 0;
	char temp;

	while (str[length])
		length++;
    length--;
	while (length > i)
	{
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        length--;
        i++;
	}
	return (str);
}

int main()
{
    char str[] = "YASIN";
    printf("%s", ft_strrev(str));
}