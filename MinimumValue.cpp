#include <iostream>

void values(int first, int second);

void display(int first, int second);


int main()
{
	int first;
	int second;
	
	values(first, second);
	display(first, second);

	return 0;
}

void values(int first, int second)
{
    

}

void display(int first, int second)
{
	std::cout << "Enter the first number: \n";
	std::cin >> first;
	std::cout << "Enter the second number: \n";
	std::cin >> second;

	if (first > second)
		std::cout << first << " greater than " << second << "\n";
	else
		std::cout << second << " greater than " << first << "\n";

}