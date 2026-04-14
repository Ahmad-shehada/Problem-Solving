#include <iostream>
#include <string>
using namespace std;

//we use getline in "string library"to avoid stop condition of cin to stop get data in buffer (space, tab, newline)
// but the stop condition of getline is only (new line)

string ReadFullName(const string& Message)
{
	string FullName = "";

	cout << Message;
	getline(cin, FullName);

	return FullName;
}
void PrintFullName(const string& FullName)
{
	cout << "\nYour name is " << FullName << "\n";
}

void ReadAndPrintFullName()
{
	string FullName = ReadFullName("Please enter your Full Name : ");
	PrintFullName(FullName);
}

int main()
{
	ReadAndPrintFullName();
}