#include <iostream>
using namespace std;

struct stInfo
{
	short Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please enter your age : ";
	cin >> Info.Age;

	cout << "Do you have Driver License 1/0 : ";
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Welcom you are Hired\n";
	else
		cout << "\n Sorry you are rejected\n";
}

int main()
{
	PrintResult(ReadInfo());
}