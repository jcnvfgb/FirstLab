#include <iostream>
#include <string>
using namespace std;

void main() {
	char clipboard[] = { (char)28, (char)72 };
	cout << clipboard[0] << clipboard[1] << endl;
	string s1 = "" + clipboard[0] + clipboard[1];
	cout << s1 << endl;
	string s2 = "" + (char)72 + (char)72;
	cout << s2 << endl;
	system("pause");
}