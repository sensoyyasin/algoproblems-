#include <iostream>

int main()
{
	float a,b,c;
	float calculater;

	std::cout << "you can enter the triangle point";
	std::cin >> a >> b >> c;

	if (a == b && a == c)
		std::cout << "Equilateral values" << std::endl;
	else
	{
		if (a != b && a != c && b != c)
			std::cout << "Different values" << std::endl;
		else
			std::cout << "Isosceles values" << std::endl;
	}
}
