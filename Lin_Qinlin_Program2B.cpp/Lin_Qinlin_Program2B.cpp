//Qinlin Lin
//CIS-5 Online
//1-10-2023
//Program 2B: Laser Wars Cantina 

#include <iostream>
using namespace std;

int main()
{

	cout << "Enter the bill total\n\n";

		// declare constants and variables
		double FoodItems, Tax, Tip, Total;
	const double TAX_RATE = .08;
	const double TIP_RATE = .2;

	// assign FoodItems
	FoodItems;

	// calculate tax
	Tax = FoodItems * TAX_RATE;

	//calculate tip
	Tip = FoodItems * TIP_RATE;

	//calculate total
	Total = FoodItems + Tax + Tip;

	//display results
	cout << "FoodItems--------: $" << FoodItems << endl;
	cout << "Tax--------------: $" << Tax << endl;
	cout << "Tip--------------: $" << Tip << endl;
	cout << "Total------------: $" << Total << endl;

	system("pause");
	
	return  0;
}