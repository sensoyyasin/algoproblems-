#include <iostream>

int main()
{
	int a = 10;
	int b = 20;

	int temp = a;
	a = b;
	b = temp;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}
