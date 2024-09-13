#include <iostream>
#include <string>
using namespace std;

void main() {
	string buffer = " ";
	char test[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!' };

	cout << sizeof(test) / sizeof(char);

	for (int i = 0; i < sizeof(test) / sizeof(char); i++)
	{
		for (int j = 0; j < 255; j++)
		{
			buffer[i] = (char)j;
			cout << buffer << endl;
			if (buffer[i] == test[i])
			{
				buffer += " ";
				break;
			}
		}
	}
}