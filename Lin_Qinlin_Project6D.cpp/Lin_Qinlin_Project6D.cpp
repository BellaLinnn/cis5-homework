//Qinlin Lin
//CIS-5 Online
//1-20-2023
//Program 6D: Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int num = rand() % 500 + 1;
	int input;
	

	

	do
	{
		cout << "Guess what number I've selected, between 1 and 500." << endl;
		cin >> input;

		if (input > num)
		{
			cout << "Your number " << input << " is to high, please try again." << endl;
		}

		else if (input < num)
		{
			cout << "Your number " << input << " is to low, please try again." << endl;
		}

		else
		{
			cout << "Correct! "<< input << " is the correct number, nice guess!" << endl;
		}

	}

	while (input != num);

	return 0;
}