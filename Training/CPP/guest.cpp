#include <iostream>

int main()
{
	int hostUserNum, guestUserNum;
	std::cout << "Host: ";
	std::cin >> hostUserNum;

	std::cout << "guestUserNum: ";
	std::cin >> guestUserNum;

	(hostUserNum == guestUserNum)? std::cout << "Correct!": std::cout << "Failed!";

	// if (hostUserNum == guestUserNum)
	// 	std::cout << "Correct!";
	// else
	// 	std::cout << "Failed!";
}
