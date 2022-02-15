#include <iostream> // Provides the input / output to the console
#include <iomanip> // setw, provides some standard formatting
#include <string> // working with strings

/*
	Varibles->Containers for storing data values
	int - stores whole numbers, without decimls 123 or -123
	double - stores floating point numbers like 19.99 or -19.99
	float - stores floating point numbers like 19.99 or -19.99
	char - stores single characters like 'S' or 's', surrounded by single quotes
	string - stores text like "Hello World", surrounded by double quotes
	bool - two states true or false
	unsigned = negative values
	signed = positive values
*/

int main()
{
	int year = 2022; // int (variable) year (ref to variable) 2022 (initial value)
	double balance = 19.99; // double (variable) year (ref to variable) 19.99 (initial value)
	char myFavLetter = 'S'; // char (varible) myFavLetter (ref to variable) 'S' (initial value)
	std::string yearStatement = "This is our current year."; // string (variable) yearStatement (ref to varible) "This is our current year." (initial value)
	bool iLikeCpp = true; // bool (varible) iLikeCpp (ref to varible) true (initial value)

	std::cout << std::setw(4) << 2022 << " this is our current year." << std::endl;
	std::cout << std::setw(4) << 10 << " this is my lucky number." << std::endl;
	std::cout << std::setw(4) << 1 << " such a lonely number." << std::endl;

	std::cout << year << " " << yearStatement << std::endl;
	std::cout << "Balance: " << balance << std::endl;
	std::cout << "My Fav Letter is: " << myFavLetter << std::endl;
	std::cout << "I love C++: " << iLikeCpp << std::endl;
}