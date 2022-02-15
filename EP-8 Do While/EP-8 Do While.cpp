#include <iostream>

int main()
{
	int sum = 0;
	int n = 0;

	do {
		std::cout << "Enter a number (0 to exit): ";
		std::cin >> n;
		sum += n;
	} while (n > 0);
	
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}