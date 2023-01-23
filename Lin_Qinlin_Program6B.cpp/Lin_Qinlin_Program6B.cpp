//Qinlin Lin
//CIS-5 Online
//1-19-2023
//Program 6B: Do While Loops

#include <iostream>
using namespace std;

int main()
{

	int choice = 0;
	bool condition = true;

	do {
		cout << "What is your favorite SuperHero?" << endl;
		cout << "1. superman\n2. Batman\n3. The Notorious RBG\n4. Quit" << endl;
		cin >> choice;

		if (choice == 1) {
			cout << "\nSuperman is always the best!\n" << endl;
		}

		else if (choice == 2) {
			cout << "\nBatman will save you!\n" << endl;
		}

		else if (choice == 3) {
			cout << "\nYou can't spell TRUTH without RUTH.\n" << endl;
		}

		else if (choice == 4) {
			condition = false;
		}
	}

	while (condition == true);
	cout << "\nGood bye!" << endl;

	return 0;
}