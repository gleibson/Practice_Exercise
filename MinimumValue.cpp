#include <iostream>

int main()
{
	int first;
	int second;

	std::cout << "Enter the first number: \n";
	std::cin >> first;
	std::cout << "Enter the second number: \n";
	std::cin >> second;

	if (first > second)
    	std::cout << first << " greater than " << second << "\n";
	else
		std::cout << second << " greater than " << first << "\n";
	return 0;
}