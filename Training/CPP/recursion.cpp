#include <iostream>
#include <iomanip>

int rec_func(int recursive)
{
	int i = 0;
	int toplam = 0;
	if (recursive > 0)
	{
		toplam = recursive + rec_func(recursive - 1);
		if (recursive == 1)
			return(toplam);
		recursive--;
	}
	return(toplam);
}

int main()
{
	// 3 -> 3 + 2 + 1;

	int recursive;
	std::cout << "Recursive sayisini gir: ";
	std::cin >> recursive;

	int a = rec_func(recursive);
	std::cout << a << std::endl;

	return(0);
}
