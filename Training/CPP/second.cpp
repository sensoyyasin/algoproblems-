#include <iostream>

int main()
{
	int number;

	std::cout << "Please enter number: ";
	std::cin >> number;
	if (number % 2 == 0)
	{
		std::cout << "You have entered even number. " << std::endl;
	}
	else
	{
		std::cout << "You have entered odd number. " << std::endl;
	}
	std::cout << "Thanks. Bye." << std::endl;
}
