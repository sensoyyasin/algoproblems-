#include <iostream>

int main()
{
	int number;
	int reversedNumber = 0;

	std::cin >> number;

	while (number != 0)
	{
		reversedNumber *= 10;
		reversedNumber += number % 10;
		number /= 10;
	}
	std::cout << reversedNumber << std::endl;
}
