//Qinlin Lin
//CIS-5 Online
//1/17/2023
//Program 5A: Math Tutor with Switch

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	 //Declarations
	int num1, num2, result, answer, min, max;
	char choice;
	string name;
	const string ERROR = "Invalid choice, please choose a given option.";
	const string QUIT_1 = "Thank you, ",
		QUIT_2 = ", for using this program! Please use it again if you need more practice!\n\n";
	int seed = time(0);

	//Comment out the seed until you have verified your code
	srand(seed);

	//Welcome message
	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "\n\nWelcome, " << name << " to Math Tutor!" << endl << "I will help you test your simple addition, subtraction, multiplication, or division skills." << endl;

	//Menu Choice
	cout << endl << "Which do you wish to ptacrice?" << endl;
	cout << "1: Addition" << endl;
	cout << "2: Subtraction" << endl;
	cout << "3: Multiplication" << endl;
	cout << "4: Division" << endl;
	cout << "5: Quit" << endl;
	cin >> choice;

	switch (choice)
	{
		//Addition Choice
		case '1':
			//Range of Addition Numbers, top number between 100 and 999
			min = 100;
			max = 999;

			//Addition Random Numbers and Total
			num1 = (rand() % (max - min + 1)) + min;

			//bottom number between 10 and 99
			min = 10;
			max = 99;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 + num2;

			//User inputs an Answer
			cout << "You have chosen Addition." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "+ " << num2 << endl;
			cout << "_____" << endl;
			cin >> answer;

			//test for correct answer
			if (answer == result)
			{
				cout << "\nExcellent, " << name << "! You are correct. \n\n";
			}

			//test for incorrect answer
			else if (answer != result)
			{
				cout << "\nNope, Thant's not correct, " << name << ", The correct answer is " << result << ". \nReview your notes and try again." << endl << endl;
			}

			break;

		//Subtraction Chioce
		case'2':
			//Range of Subtrantion Numbers, top number between 10 and 99
			min = 10;
			max = 99;

			//Substraction Random Numbers and Total
			num1 = (rand() % (max - min + 1)) + min;

			//bottom number between 1 and 9
			min = 1;
			max = 9;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 - num2;

			//User inputs an Answer
			cout << "You have chosen Addition." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "- " << num2 << endl;
			cout << "_____" << endl;
			cin >> answer;

			//test for correct answer
			if (answer == result)
			{
				cout << "\nExcellent, " << name << "! You are correct. \n\n";
			}

			//test for incorrect answer
			else if (answer != result)
			{
				cout << "\nNope, Thant's not correct, " << name << ", The correct answer is " << result << ". \nReview your notes and try again." << endl << endl;
			}

			break;

			//multiplication Chioce
		case'3':
			//Range of multiplication Numbers, top number between 1 and 12
			min = 1;
			max = 12;

			//multiplication Random Numbers and Total
			num1 = (rand() % (max - min + 1)) + min;

			//bottom number between 1 and 12
			min = 1;
			max = 12;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 * num2;

			//User inputs an Answer
			cout << "You have chosen Addition." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "x " << num2 << endl;
			cout << "_____" << endl;
			cin >> answer;

			//test for correct answer
			if (answer == result)
			{
				cout << "\nExcellent, " << name << "! You are correct. \n\n";
			}

			//test for incorrect answer
			else if (answer != result)
			{
				cout << "\nNope, Thant's not correct, " << name << ", The correct answer is " << result << ". \nReview your notes and try again." << endl << endl;
			}

			break;

			//division Chioce
		case'4':
			cout << "Division function have not been developed, please wait!" << endl;
			break;

			//quit Chioce
		case '5' :
			cout << "/nYou chose to quit the program." << endl << endl;
			break;


		//Invalid Choice
		default:
			cout << ERROR << endl;
			break;
	}

	cout << QUIT_1 << name << QUIT_2 << endl;
	system("pause");

	return 0;
}