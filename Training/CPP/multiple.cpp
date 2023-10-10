#include <iostream>

int main()
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		j = 0;
		while (j <= 10)
		{
			std::cout << i << " x " << j << " = " << i * j << std::endl;
			j++;
		}
		std::cout << std::endl;
		i++;
	}
}
