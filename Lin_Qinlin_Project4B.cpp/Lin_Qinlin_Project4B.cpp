// Lab 4B Gradebook BEGIN
// Chapter 4 Decisions, Nested If Structures
// 1. Run this BEGIN file. Examine the code and analyze it. Run the program
// multiple times so that each branch is tested and verified. This code works 
// for an A student or a B student. It is not yet finished for a C, D, or F student.
// Review every line of code. 
// Once you fully understand the code add the following modifications
// 2. Complete the code for a grade of C, D or F. 
// Include appropriate comments for a C grade, D grade and an F grade. 
// 3. Modify the logic so that if a student earns a D or F in the course, instead of displaying
// the sentence  "Please see a counselor..." instead display a sentence stating "You must 
// retake the course before registering for advanced courses."
// Test all branches to ensure the program works correctly (Test for an A, B, C, D and F student)
// Submit the .cpp file
// Qinlin Lin
// CIS-5 Online
// 1/16/2023
// Program 4B: GradeBook, Logical Operators and Boolean Flag



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string name;
	int test1, test2, test3;
	int numTests = 3;
	float avg;
	char answer;
	char grade = 'X';
	bool isActive;
	const float A_GRADE = 90.00;
	const float B_GRADE = 80.00;
	const float C_GRADE = 70.00;
	const float D_GRADE = 60.00;

	//get the student's name
	cout << "Enter the student name: ";
	getline(cin, name);

	//enter yes or no
	cout << "Is " << name << " actively participating in the course? Answer Y or N. ";
		cin >> answer;
	//if the answer is yes
	if (answer == 'Y' || answer == 'y')
		isActive = true;
	//if the amswer is no
	else if (answer == 'N' || answer == 'n')
		isActive = false;
	//either put yes nor no
	else
	{
		cout << "Input error. Program ending \n";  // we will learn more about error handling later exit(0);  //this is not good style, but it's acceptable for now
	}

	//enter three number between 0 and 100
	cout << "Enter three test scores between 0 and 100: ";

	cin >> test1 >> test2 >> test3;  // user may input integers only, assume user inputs valid data
		avg = static_cast<float>(test1 + test2 + test3) / numTests;  // cast to a float for decimal
		cout << fixed << showpoint << setprecision(1);
	cout << endl << endl << name << "'s average = " << avg << endl;

	//if the average is greater than or equal to A grade
	if ((avg >= A_GRADE) && (isActive == true))
	{
		grade = 'A';
		cout << "Congratulations! You are awesome. \n";
	}

	//if the average is greater than or equal to B grade
	else if ((avg >= B_GRADE) && (isActive == true))
	{
		grade = 'B';
		cout << "Good job. You are brilliant. \n";
	}

	//if the average is greater than or equal to C grade
	else if ((avg >= C_GRADE) && (isActive == true))
	{
		grade = 'C';
		cout << "Nice work. You did good on your work. \n";
	}

	//if the average is greater than or equal to D grade
	else if ((avg >= D_GRADE) && (isActive == true))
	{
		grade = 'D';
		cout << "You need to work harder! \n";
	}

	//if the average is less than D grade
	else if ((avg < D_GRADE) && (isActive == true))
	{
		grade < 'F';
		cout << "You are failing the class, please work hard \n";

	}

	//if the answer is no
	else if (isActive == false)
	{
		grade = 'W';
		cout << "Student has been withdrawn from the course. \n";
	}

	//entered things other numbers
	else  // trailing else to catch errors
	{
		grade = 'X';
		cout << " INVALID LOGIC. CHECK YOUR CODE. \n";
	}
	cout << endl;

	//if the grade is equal to A, B, C grade
	if (grade != 'X' && grade != 'W' && (grade == 'A' || grade == 'B' || grade == 'C')) // check for withdrawn student or error
	{
		cout << name << ", you earned a grade of " << grade << " in the course.\n";
		cout << "Please see your counselor to register for next semester. \n\n\n";
	}

	//if the grade is lower than C grade
	else if (grade != 'X' && grade != 'W' && (grade == 'D' || grade == 'F'))
	{
		cout << name << ", you earned a grade of " << grade << " in the course.\n";
		cout << "You must retake the course before registering for advanced courses. \n\n\n";
	}

	return 0;
}