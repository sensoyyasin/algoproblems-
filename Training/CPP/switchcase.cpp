#include <iostream>

int main()
{
	float num1, num2;
	char operation;
	std::cout << "Calculator, give me the number and expression: ";
	std::cin >> num1 >> operation >> num2;

	switch (operation)
	{
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << num1 * num2 << std::endl;
			break;
		case '/':
			std::cout << num1 / num2 << std::endl;
			break;
		default:
			break;
	}
	return(0);
}
