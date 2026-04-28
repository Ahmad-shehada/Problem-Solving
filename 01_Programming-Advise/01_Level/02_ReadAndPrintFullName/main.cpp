#include <iostream>
#include <string>
using namespace std;

// we use getline in "string library"to avoid stop condition of cin to stop get data in buffer (space, tab, newline)
// but the stop condition of getline is only (new line)

string ReadString(const string& Message)
{
	string Text = "";

	cout << Message;
	getline(cin, Text);

	return Text;
}
void PrintFullName(const string& FullName)
{
	cout << "\nYour name is " << FullName << "\n";
}

int main()
{
	string FullName = ReadString("Please enter your Full Name : ");
	PrintFullName(FullName);
}