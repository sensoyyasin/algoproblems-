#include <iostream>

int main()
{
	float monthly_salary;
	std::cout << "Please enter your monthly salary: ";
	std::cin >> monthly_salary;

	float year_salary;
	year_salary = monthly_salary * 12;
	std::cout << "Your year salary is:  " << year_salary << std::endl;
}
