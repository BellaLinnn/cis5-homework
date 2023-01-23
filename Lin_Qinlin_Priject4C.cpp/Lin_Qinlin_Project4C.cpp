//Qinlin Lin
//CIS-5 Online
//1-16-2023
//Program 4C: Facemask Sales

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int mask;
	const int MASK_PRICE = 13;

	const float FIRST_DISCOUNT = 0.2;
	const float SECOND_DISCOUNT = 0.3;
	const float THIRD_DISCOUNT = 0.4;
	const float FORTH_DISCOUNT = 0.5;
	float total;


	cout << "Thank you for using the mask price calculator.";
	cout << "if you buy more face mask, we will offer more discount" << endl;

	cout << "The original price of the facemask is 13$\n";

	cout << "for 10 - 49, you will get a 20% discount \n ";
	cout << "for 50 - 199, you will get a 30% discount \n ";
	cout << "for 200 - 499, you will get a 40% discount \n ";
	cout << "for 500 or more, you will get a 50% discount \n ";

	cout << "Please enter the number of masks you would like to order. \n";
	cin >> mask;


	//set the decimal to tenth
	cout << setprecision(2) << fixed;

	
	//if the number of mask is grater than 10000
	if (mask > 10000) {
		cout << "You exceed the maximum, please retry" << endl;
		return 0;
	}

	//if the number of mask is equal to 0
	else if (mask == 0) {
		cout << "You need to buy at leasy one mask, please retry" << endl;
		return 0;
	}

	//if the number of mask is gradtr than or equal to 10, less than or equal to 49
	else if ((mask >= 10) && (mask <= 49) ){
		total = mask * MASK_PRICE * FIRST_DISCOUNT;
	}
	
	//if the number of mask is greater than or equal to 50, less than or equal to 199
	else if ((mask >= 50) && (mask <= 199)) {
		total = mask * MASK_PRICE * SECOND_DISCOUNT;
	}

	//if the number of mask is grater than or equal to 200, less than or equal to 499
	else if ((mask >= 200) && (mask <= 499)) {
		total = mask * MASK_PRICE * THIRD_DISCOUNT;
	}

	//if the number of mask is grater than or equal to 500, less than or equal to 10000
	else if (mask <= 500) {
		total = mask * MASK_PRICE * FORTH_DISCOUNT;
	}

	//if the number of mask is less than 10
	else {
		total = mask * MASK_PRICE;
	}


	//show the result
	cout << "Your total will be " << total << endl;

	return 0;
}