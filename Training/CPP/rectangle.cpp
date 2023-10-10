#include <iostream>
#include <iomanip>

int main()
{
	int heigth,width;
	char symbol;

	std::cout << "Height: ";
	std::cin >> heigth;

	std::cout << "Width: ";
	std::cin >> width;

	std::cout << "symbol: ";
	std::cin >> symbol;

	for (int i = 1; i <= heigth; i++)
	{
		for (int j = 1; j <= i; j++)
			std::cout << std::setw(2) << symbol;
		std::cout << std::endl;
	}
}
