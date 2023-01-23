//Qinlin Lin
//CIS-5 Online
//11/12/2023
//Program 3B: Box Office

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int Adult, Child;
	const float ADULT_PRICE = 10;
	const float CHILD_PRICE = 6;
	const float PROFIT = .2;
	float Total, NetProfit, Paid;

	string MovieName;

	//Name of the movie
	cout << "What is the name of the movie?" << endl;
	getline(cin, MovieName);
	cout << " " << endl;

	//Number of adult tickets were sold
	cout << "How many adult tickets were sold?" << endl;
	cin >> Adult;
	cout << " " << endl;

	//Number of child tickets were sold
	cout << "How many child tickets were sold?" << endl;
	cin >> Child; 
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;

	//calculate
	Total = (Adult * ADULT_PRICE) + (Child * CHILD_PRICE);
	NetProfit = Total * PROFIT;
	Paid = Total - NetProfit;

	//Summarize the amount
	cout << setprecision(2) << fixed;
	cout << left << setw(27) << "\nMovie Name :" << right << setw(7) << MovieName;
	cout << left << setw(27) << "\nAdult tickets sold:"<< right << setw(7) << Adult;
	cout << left << setw(27) << "\nChild yickets sold:" << right << setw(7) << Child;
	cout << endl;
	cout << left << setw(29) << "\nGross Box Office Profit:" << "$" << right << setw(7) << Total;
	cout << left << setw(29) << "\nNet Box Office Profit:" << "$" << right << setw(7) << NetProfit;
	cout << left << setw(29) << "\nAmount Paid to Distributor:" << "$" << right << setw(7) << Paid << endl;


	return 0;
}