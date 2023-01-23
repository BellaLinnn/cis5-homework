//Qinlin Lin
//CIS-5 Online
//1-11-2023
//Program 3A: Find the Hypotenuse

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string name, day, time;
	double a, b, c;

	//Get student's name
	cout << "Enter the student's name" << endl;
	cin >> name;
	//std::getline(std::cin,name);

	//Get the day and time the class meets
	cout << "Enter the day the class meets"<< endl;
	cin >> day;

	cout << "Enter the time the class meets" << endl;
	cin >> time;


	//Get the length of two sides, which is a and b
	cout << "Enter the length of side a: " << endl;
	cin >> a;
	cout << "Enter the length of side b: " <<endl;
	cin >> b;

	// Compute and display the length of the hypotenuse
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));

	// Value of the hypotenus
	setprecision(2);
	cout << "Student name: " + name << endl;
	cout << "Date: " + day + " " + time << endl;

	cout << "side1:" << setw(8) << a << "\n";
	cout << "side2:" << setw(8) << b << "\n";
	cout << "hypotenuse:" << setprecision(3) << setw(8) << c << endl;


	return 0;

}