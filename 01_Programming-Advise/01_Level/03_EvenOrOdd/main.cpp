#include <iostream>
using namespace std;


int ReadInt(const string& Message)
{
	int Num;

	cout << Message;
	cin >> Num;

	return Num;
}

bool isEven(int Num)
{
	return (Num % 2 == 0);
}

void PrintEvenOrOdd(int Num)
{
	cout << "\n";

	if (isEven(Num))
		cout << "The Number is Even";
	else
		cout << "The Number is Odd";

	cout << "\n";
}

int main()
{
	int Num = ReadInt("Please enter a Number : ");
	PrintEvenOrOdd(Num);

	return 0;
}