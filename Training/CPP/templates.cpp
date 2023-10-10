#include <iostream>
#include <iomanip>

template<typename T>
void Swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 5,b = 7;

	std::cout << a << " , " << b << std::endl;
	Swap(a,b);
	std::cout << a << " , " << b << std::endl;

	float c = 41.2f, d = 50.8f;
	std::cout << c << " , " << d << std::endl;
	Swap(c,d);
	std::cout << c << " , " << d << std::endl;

	return(0);
}
