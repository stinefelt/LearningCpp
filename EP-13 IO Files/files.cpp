#include <iostream>
#include <fstream>
#include <string>

#define COL_WIDTH 80

// Variables
char filename[FILENAME_MAX + 1];
char input_line[COL_WIDTH + 1];
int c; // Input Character

// Function Declerations
void WriteFile(std::ofstream& fileOut, std::string content, int numb);
void ReadFile(std::ifstream& fileIn);
bool bCanAccessFile(std::ofstream& fileOut);
bool bCanAccessFile(std::ifstream& fileIn);

int main()
{
	// Ask the user for the filename
	std::cout << "Enter filename and press ENTER: " << std::endl;
	// Get the user input for the filename
	std::cin.getline(filename, FILENAME_MAX);
	// Create our ofstream file object and referenc the filename that we received from the user.
	std::ofstream file_out(filename);
	// Can we acces let's write content to the file	
	WriteFile(file_out, "Hello first line of text", 0);
	WriteFile(file_out, "Hello second line of text", 0);
	WriteFile(file_out, "Hello third line of text", 0);

	for (int i = 0; i <= 100; i++)
	{
		WriteFile(file_out, "Line Number: ", i);
	}

	// Close the file
	file_out.close();
	// Let user know that we are good.
	std::cout << "File write was seccessful!" << std::endl;
	// Create our read file object
	std::ifstream fileRead(filename);
	ReadFile(fileRead);
}

void ReadFile(std::ifstream& fileIn)
{
	if (!fileIn) return;
	if (!bCanAccessFile(fileIn))
	{
		std::cout << "Can't access the file error." << std::endl;
		return;
	}

	while (true)
	{
		for (int i = 1; i <= 24 && !fileIn.eof(); ++i)
		{
			fileIn.getline(input_line, COL_WIDTH);
			std::cout << input_line << std::endl;
		}
		if (fileIn.eof())
		{
			break;
		}
		std::cout << "More? (Press 'Q' and ENTER to quit)";
		std::cin.getline(input_line, COL_WIDTH);
		c = input_line[0];
		if (c == 'Q' || c == 'q')
		{
			break;
		}
	}
}

void WriteFile(std::ofstream& fileOut, std::string content, int numb)
{
	if (!fileOut) return;
	if (!bCanAccessFile(fileOut))
	{
		std::cout << "Can't access the file error." << std::endl;
		return;
	}
	fileOut << content << numb << std::endl;
}

bool bCanAccessFile(std::ifstream& fileIn)
{
	if (!fileIn)
	{
		return false; // Can't open the file
	}
	return true;
}

bool bCanAccessFile(std::ofstream& fileOut)
{
	if (!fileOut)
	{
		return false; // Can't open the file
	}
	return true;
}