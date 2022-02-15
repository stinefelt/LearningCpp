#include <iostream>

int main()
{
	int age;
	std::cout << "Enter the person's age: ";
	std::cin >> age;

	if (age > 13)
	{
		std::cout << "This person is a teenager!" << std::endl;		
	}
	else if (age > 3)
	{
		std::cout << "This person is a kid!" << std::endl;
	}
	else
	{
		std::cout << "This person is a baby!" << std::endl;
	}

	return 0;
}