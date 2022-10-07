#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			a;
	size_t			b;
	unsigned char	*s;

	a = 0;
	b = 0;
	s = (unsigned char *)src;
	while (s[a] != '\0')
		a++;
	if (dstsize != 0)
	{
		while (s[b] != '\0' && b < dstsize - 1)
		{
			dst[b] = s[b];
			b++;
		}
		dst[b] = '\0';
	}
	return (a);
}

int	main()
{
	char dizi1[30] = "yasintemp";
	char dizi2[50] = "mehmetyasin";
	ft_strlcpy(dizi1,dizi2,20);
	printf("%zu\n", ft_strlcpy(dizi1,dizi2,1));
}