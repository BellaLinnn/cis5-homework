//Qinlin Lin
//CIS-5 Online
//1-20-2023
//Program 6C: For Loops

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float sale;
	float total = 0;

	cout << "Welcome, please input your sale amount of your four divisions into the system" << endl;

	for (int i = 0; i < 4; i++)
	{

		cout << "Enter your sales: " << endl;
		cin >> sale;
		total = sale + total;
	}

	setprecision(2);
	cout << " Your total is " << total << "$" << endl;

	return 0;
}