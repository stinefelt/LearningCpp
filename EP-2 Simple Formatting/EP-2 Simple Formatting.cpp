#include <iostream> // Provides the input / output to the console
#include <iomanip> // setw, provides some standard formatting

int main()
{
	std::cout << std::setw(4) << 2022 << " this is our current year." << std::endl;
	std::cout << std::setw(4) << 10 << " this is my lucky number." << std::endl;
	std::cout << std::setw(4) << 1 << " such a lonely number." << std::endl;
}