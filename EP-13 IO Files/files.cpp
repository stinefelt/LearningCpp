//READ FILE
#include <iostream>
#include <fstream>

#define COL_WIDTH 80

int main()
{
	int c; // input character
	char filename[FILENAME_MAX];
	char input_line[COL_WIDTH + 1];

	std::cout << "Enter a file name and press ENTER: ";
	std::cin.getline(filename, FILENAME_MAX);

	std::ifstream file_in(filename);

	// Can we open the file?
	if (!file_in)
	{
		std::cout << filename << " couldn't be open!" << std::endl;
		return -1;
	}

	while (true)
	{
		for (int i = 1; i <= 24 && !file_in.eof(); ++i)
		{
			file_in.getline(input_line, COL_WIDTH);
			std::cout << input_line << std::endl;
		}
		if (file_in.eof())
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
	return 0;
}

// WRITE FILE
//#include <iostream>
//#include <fstream>
//#include <string>
//
//// Variables
//char filename[FILENAME_MAX + 1];
//
//// Function Declerations
//void WriteFile(std::ofstream& fileOut, std::string content);
//bool bCanAccessFile(std::ofstream& fileOut);
//
//int main()
//{
//	// Ask the user for the filename to write.
//	std::cout << "Enter file name and press ENTER: ";
//	// Get the user input for the filename.
//	std::cin.getline(filename, FILENAME_MAX);
//	// Create our ofstream file object and reference the filename that we received from the user.
//	std::ofstream file_out(filename);
//	// We can access let's write content to the file.
//	WriteFile(file_out, "Hello first line of text.");
//	WriteFile(file_out, "Hello second line of text.");
//	WriteFile(file_out, "Hello third line of text.");
//	// Close the file out once we are done.
//	file_out.close();
//	// Let user know we are good to go.
//	std::cout << "File write was successful!" << std::endl;
//}
//
///// <summary>
///// Takes in a ofstream file and writes the string contents.
///// </summary>
///// <param name="fileOut">ofstream filename</param>
///// <param name="content">string content</param>
//void WriteFile(std::ofstream& fileOut, std::string content)
//{
//	if (!fileOut) return;
//	if (!bCanAccessFile(fileOut))
//	{
//		std::cout << "Can't access the file error." << std::endl;
//		return;
//	}
//	fileOut << content << std::endl;
//}
//
///// <summary>
///// Returns true of the file can be opened.
///// </summary>
///// <param name="fileOut">bool true/false</param>
///// <returns>True if file can be opened, false if not.</returns>
//bool bCanAccessFile(std::ofstream& fileOut)
//{
//	if (!fileOut)
//	{
//		return false; // Can't open file
//	}
//	return true;
//}
