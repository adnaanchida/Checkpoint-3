// Adnaan Chida
// Checkpoint 8

#include <iostream>
#include <map>
#include <list>
#include <cmath>

using namespace std;

int main()
{
	// creating map to store even integer keys and integer value pairs
	std::map<int, int> m; 
	std::list<int> l; // creating list
	int input;

	for (int i = 2; i <= 18; i += 2) // keys from 2 to 18
	{
		m.insert(std::pair<int, int>(i, pow(i, 2))); // values are squared values of keys
	}

	std::cout << "Input [-1 to quit]: "; 
	std::cin >> input;
	while (input != -1) // loop, prompts the user for input until -1
	{
		l.push_back(input);
		std::cout << "Input [-1 to quit]: ";
		std::cin >> input;
	}

	// prints out the key/value pair
	for (auto i : l)
	{
		if (m.find(i) != m.end())
		{
			std::cout << "{" << i << ", " << m[i] << "}" << " ";
		}
	}
	return 0;
}

/*
OUTPUT:

Input [-1 to quit]: 3
Input [-1 to quit]: 6
Input [-1 to quit]: 12
Input [-1 to quit]: -1
{6, 36} {12, 144}

C:\Users\Adnaan Chida\source\repos\Checkpoint 8\x64\Debug\Checkpoint 8.exe (process 6216) exited with code 0.
Press any key to close this window . . .

Input [-1 to quit]: 2
Input [-1 to quit]: 4
Input [-1 to quit]: 6
Input [-1 to quit]: 8
Input [-1 to quit]: -1
{2, 4} {4, 16} {6, 36} {8, 64}

C:\Users\Adnaan Chida\source\repos\Checkpoint 8\x64\Debug\Checkpoint 8.exe (process 6216) exited with code 0.
Press any key to close this window . . .
*/