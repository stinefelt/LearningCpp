#include <iostream>

int main()
{
	int numb;

	std::cout << "Enter int numb: ";
	std::cin >> numb;

	int sum = 0;

	for (int i = 1; i <= numb; i++)
	{
		int number;
		std::cout << "Enter: " << i << ". number: ";
		std::cin >> number;

		sum += number;
	}

	std::cout << "Sum of " << numb << " entered numbers is: " << sum << std::endl;
}