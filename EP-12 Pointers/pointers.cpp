#include <iostream>
#include <ctime>

// type *name;
// Pointer - variable that contains a numeric address
// Change values of arguments passed into a function

void GetSeconds(unsigned long* par);

int main()
{
	unsigned long sec;
	GetSeconds(&sec);

	// Print Value of seconds
	std::cout << "Number of seconds: " << sec << std::endl;

	int var = 20; // Var Declaration
	int* ip; // Pointer Variable

	ip = &var; // store address of var in a pointer variable

	std::cout << "Value of var variable: ";
	std::cout << var << std::endl;

	// Address stored in the ip pointer variable
	std::cout << "Address in IP Variable: ";
	std::cout << ip << std::endl;

	// access the value at the address in the avialiable pointer
	std::cout << "Value of *ip variable: ";
	std::cout << *ip << std::endl;
}

void GetSeconds(unsigned long* par)
{
	// Current number of seconds
	*par = time(NULL);
	return;
}