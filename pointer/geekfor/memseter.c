#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
        write(1, &str[i], 1);
    }
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

int	main()
{
	char dizi[30] = "yasintemp";
	ft_putstr(ft_memset(dizi,'x',2));
}