#include <iostream>
#include <iomanip>

void showMenu()
{
	std::cout << "*********MENU*********" << std::endl;
	std::cout << "1. Check balance" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "**********************" << std::endl;
}

void deposit(int balance)
{
	int deposit;

	std::cout << "How much money do you wanna deposit: ";
	std::cin >> deposit;

	if (deposit > balance)
	{
		std::cerr << "You can't do that" << std::endl;
		exit(0);
	}
	else
		std::cout << "Your current money is: " << balance - deposit << " $" << std::endl;
}

void withdraw(int balance)
{
	int withdraw;

	std::cout << "How much money do you wanna withdraw: ";
	std::cin >> withdraw;

	std::cout << "Your current money is: " << balance + withdraw << " $" << std::endl;
}

int main()
{
	//check balance, deposit money, withdraw, show menu
	int option;
	double balance = 500;

	showMenu();
	std::cout << "Option: ";
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "Balance is " << balance << " $" << std::endl;
		break;
	case 2:
		deposit(balance);
		break;
	case 3:
		withdraw(balance);
		break;
	default:
		break;
	}
}
