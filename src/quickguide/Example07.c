#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "hello, dear";

	string str2 = "hello, \
	dear";

	string str3 = "hello, " "d" "ear";
	
	cout << str1 + "\n";
	cout << str2 + "\n";
	cout << str3;
}