#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <windows.h>



int main()
{
	//Hay 6569 archivos de texto con ascii art
	std::string name1_9 = "C:/Hack 2.0/ImageToAscii/res/BAX.txt";       //Direccion de los AsciiArt from 0-9
	std::string name1_99 = "C:/Hack 2.0/ImageToAscii/res/BAXX.txt";     // from 10-99
	std::string name1_999 = "C:/Hack 2.0/ImageToAscii/res/BAXXX.txt";   //from 100-999
	std::string name1_9999 = "C:/Hack 2.0/ImageToAscii/res/BAXXXX.txt"; //from 1000-9999


	
	//From image 0 to image 10:
	for (int i{ 48 }; i <= 57; ++i)
	{
		std::string currentLine{};
		name1_9[31] = i;

		std::ifstream badapple(name1_9);

		while (getline(badapple, currentLine))
		{
			std::cout << currentLine << '\n';
		}
		Sleep(25);
	}

	//From image 10 to image 99:
	for (int i{ 49 }; i <= 57; ++i)
	{
		std::string currentLine{};
		name1_99[31] = i;

		for (int i{ 48 }; i < 57; ++i)
		{
			name1_99[32] = i;
			std::ifstream badapple(name1_99);
			while (getline(badapple, currentLine))
			{
				std::cout << currentLine << '\n';
			}
			Sleep(25);
		}
	}


	
	//From image 100 to image 999
	for (int i{ 49 }; i <= 57; ++i)
	{
		std::string currentLine{};
		name1_999[31] = i;

		for (int i{ 48 }; i < 57; ++i)
		{
			name1_999[32] = i;

			for (int i{ 48 }; i <= 57; ++i)
			{
				name1_999[33] = i;
				std::ifstream badapple(name1_999);
				while (getline(badapple, currentLine))
				{
					std::cout << currentLine << '\n';
				}
				Sleep(25);
			}

		}
	}

	
	
	//From image 1000 to image 10000
	for (int i{ 49 }; i <= 54; ++i)
	{
		std::string currentLine{};
		name1_9999[31] = i;

		for (int i{ 48 }; i <= 57; ++i)
		{
			name1_9999[32] = i;

			for (int i{ 48 }; i <= 57; ++i)
			{
				name1_9999[33] = i;

				for (int i{ 48 }; i <= 57; ++i)
				{
					name1_9999[34] = i;
					std::ifstream badapple(name1_9999);

					while (getline(badapple, currentLine))
					{
						std::cout << currentLine << '\n';
					}
					Sleep(29);
				}
				
			}
			
		}
	}
	
	



	return 0;
}