//Qinlin Lin
//CIS-5 Online
//1-10-2023
//Program 2A: Full Name - The program accepts the user's first and last name from the keyboard and displays a message to the user.

#include <iostream>
using namespace std;

int main()
{
	string firstName, lastName;

	cout << "Please write your first name:" << endl;
	cin >> firstName;
	cout << "Please write your last name:" << endl;
	cin >> lastName;

	cout << "Welcome to C++ programming," + firstName + lastName + "I applaud your choice to learn to code and increase your technical skills." << endl;

	return  0;
}