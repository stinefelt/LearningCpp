#include <iostream>

int main()
{
	int numb1, numb2, numb3, numb4, numb5;

	std::cout << "Enter five integers, put a space between each number: ";
	std::cin >> numb1, numb2, numb3, numb4, numb5;

	int sum = numb1 + numb2 + numb3 + numb4 + numb5;
	int multiplyNumbers = numb1 * numb2 * numb3 * numb4 * numb5;
	float average = sum / 5.0f;

	std::cout << "Sum of the numbers is: " << sum << std::endl;
	std::cout << "Average of numbers is: " << average << std::endl;
	std::cout << "All numbers multiplied together: " << multiplyNumbers << std::endl;

	return 0;
}