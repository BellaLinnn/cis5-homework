//Qinlin Lin
//CIS-5 Online
//1/16/2023
//Program 4A: Three Numbers in Order

#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;

	//enter the first number
	cout << "Please enter your first number" << endl;
	cin >> num1;
	if (num1 > 500) {
		cout << "The numer is over 500! Please retry" << endl;
		return 0;
	}

	//enter the second number
	cout << "Please enter your second number" << endl;
	cin >> num2;
	if (num2 > 500) {
		cout << "The number is over 500! Please retry" << endl;
		return 0;
	}

	//enter the third number
	cout << "Please enter your third number" << endl;
	cin >> num3;
	if (num3 > 500) {
		cout << "The number is over 500! Please retry" << endl;
		return 0;
	}


	//compare first number, sconed number, and third number
	if ((num1 <= num2) && (num1 <= num3)) {
		cout << num1 << " ";
		if (num2 <= num3) {
			cout << num2 << " ";
			cout << num3 << " ";
		}
		else {
			cout << num3 << " ";
			cout << num2 << " ";
		}
	}

	else if ((num2 <= num1) && (num2 <= num3)) {
		cout << num2 << " ";
		if (num3 <= num1) {
			cout << num3 << " ";
			cout << num1 << " ";
		}
		else {
			cout << num1 << " ";
			cout << num3 << " ";
		}
	}

	else if ((num3 <= num1) && (num3 <= num2)) {
		cout << num3 << " ";
		if (num1 <= num2) {
			cout << num1 << " ";
			cout << num2 << " ";
		}
	}

	return 0;
}