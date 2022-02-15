#include <iostream>

int main()
{
	int option;

	std::cout << "1. Main Menu" << std::endl;
	std::cout << "2. Exit" << std::endl;
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "Main Menu" << std::endl;
		break;
	case 2:
		std::cout << "Exit Program" << std::endl;
		return 0;
		break;
	default:
		std::cout << "Default Option" << std::endl;
		break;
	}

	return 0;
}