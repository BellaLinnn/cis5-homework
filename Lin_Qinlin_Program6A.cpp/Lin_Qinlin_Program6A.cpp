//Qinlin Lin
//CIS-5 Online
//1-19-2023
//Program 6A: While Loops

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int input;

	cout << "Enter an integer between 25 and 50." << endl;
	cin >> input;

	while (input < 25 || input > 50)
	{
		cout << "Your number is out of the range, please try again!" << endl;
		cin >> input;
	}

	cout << "You number " << input << " is accepted, tahnk you!" << endl;
	cout << "Good Bye!" << endl;

	return 0;
}