#include <iostream>

/*
	return_type function_name (argument list)
	{
		statements
	}
*/

// Function Decleration
int AddNumbers(int firstNum, int secondNum);
bool GreaterThen(int firstNum, int secondNum);
void PrintMsg(std::string msg);

int main()
{
	int n, a;
	
	std::cout << "Enter number to add: " << std::endl;
	std::cin >> n;

	std::cout << "Enter second number to add: " << std::endl;
	std::cin >> a;

	int sum = AddNumbers(n, a);
	bool greaterthen = GreaterThen(n, a);

	std::cout << "Number: " << n << " + " << " Number: " << a << " Equals: " << sum << std::endl;
	
	if (greaterthen)
	{
		std::cout << "Number: " << n << " is greater then " << a << std::endl;
	}
	
	PrintMsg("Hello from the print message function.");

	return 0;
}

// Functions
int AddNumbers(int firstNum, int secondNum)
{
	int sum = firstNum + secondNum;
	return sum;
}

bool GreaterThen(int firstNum, int secondNum)
{
	if (firstNum > secondNum)
	{
		return true;
	}

	return false;
}

void PrintMsg(std::string msg)
{
	std::cout << msg << std::endl;
}