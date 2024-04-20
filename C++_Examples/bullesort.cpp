#include <iostream>
#include <string>


void	bubbleSortWithDuplicates(std::string &str)
{
	int length = str.length();
	for (int i = 0; i < length - 1; ++i){
		for (int j = 0; j < length - 1 - i; ++j){
			if (tolower(str[j]) > tolower(str[j + 1]) ||
				(tolower(str[j]) == tolower(str[j + 1]) &&
					str[j] > str[j + 1])) {
					char temp = str[j];
					str[j] = str[j + 1];
					str[j + 1] = temp;
				}
		}
	}
}

int main()
{
	std::string input;
	std::cout << "Lütfen bir kelime giriniz: ";
	std::cin >> input;

	bubbleSortWithDuplicates(input);

	std::cout << "Siralanmis kelime: " << input << std::endl;

	return(0);
}
