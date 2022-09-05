#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int len;
    int *temp;
    
    if (start > end)
        len = start - end;
    else
        len = end - start;
    temp = malloc(sizeof(int) * len + 1);
    if (!temp)
        return(0);
    while (len >= 0)
    {
        temp[len] = start;
        if (start > end)
            start--;
        else
            start++;
        len--;
    }
    return(temp);
}

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}