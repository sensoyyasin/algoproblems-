#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*src;

	i = 0;
	src = (char *)s;
	if (!src)
		return (NULL);
	if (start >= strlen(s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if ((strlen(s) - start) < len)
			len = strlen(s) - start;
		str = (char *)malloc((sizeof(char) * len) + 1);
		if (!str)
			return (NULL);
		strlcpy(str, (char *)(s + start), len + 1);
	}
	return (str);
}

int	main()
{
	char	yasin[] = "yasintemp";
	printf("%s",ft_substr(yasin,3,4));
}