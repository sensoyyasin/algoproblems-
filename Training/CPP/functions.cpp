#include <iostream>
#include <iomanip>

int add(int a, int b)
{
	return(a + b);
}

int main()
{
	std::cout << "Hello from main()" << std::endl;
	int donen = add(4,5);
	std::cout << "dönen değer: " << donen << std::endl;
}
