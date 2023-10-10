#include <iostream>
#include <iomanip>

int main()
{
	int heigth,width;
	std::cout << "Height: ";
	std::cin >> heigth;

	std::cout << "Width: ";
	std::cin >> width;

	char symbol;
	std::cout << "Symbol: ";
	std::cin >> symbol;

	for (int h = 0; h < heigth; h++)
	{
		for (int w = 0; w < width; w++)
			std::cout << std::setw(3) << symbol;
			//std::cout << symbol;
		std::cout << std::endl;
	}
}
