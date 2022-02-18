#include <iostream>
#include <string>

// type array_name[elements]
int MyNumbers[5] = { 1, 2, 3, 4, 5 };
std::string MyNames[3] = { "Joe", "Bob", "Keith" };

// multi-demensional array
// type array_name[elements][elements]
int Numbers[10][10];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "My Number: " << MyNumbers[i] << std::endl;
	}

	for (int i = 0; i < MyNames->size(); i++)
	{
		std::cout << "My Names: " << MyNames[i] << std::endl;
	}

	std::cout << "My Names[1]: " << MyNames[1] << std::endl;

	for (int i = 0; i < 10; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			std::cout << "Numbers: " << Numbers[i][x] << std::endl;
		}
	}
}