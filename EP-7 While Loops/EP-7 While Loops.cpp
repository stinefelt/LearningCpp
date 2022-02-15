#include <iostream>
#include <cmath>

int main()
{
	int n = 0; // Number to test against
	int i = 2; // Loop counter
	bool bIsPrime = true; // Prime Boolean

	std::cout << "Enter a number and press Enter: "; // Display Text
	std::cin >> n; // Get Input

	// Test for prime dividing all whole numbers from 2 to sqrt(n)
	while (i <= sqrt(n))
	{
		// If i diveds n, n is not a prime number.
		if (n % i == 0)
		{
			bIsPrime = false;
			break;
		}
		++i;
	}

	// Print the result
	if (bIsPrime)
	{
		std::cout << "Number is prime." << std::endl;
	}
	else
	{
		std::cout << "Number is not prime." << std::endl;
	}

	return 0;
}