//Qinlin Lin
//CIS-5 Online
//1/17/2023
//Program 5B: Restaurant Menu 

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int choice;
    //yes or no
    string Y_N;
    
    //name and slogan
    string name = "China Town";
    string slogan = "WE COOK YOUR BEST FOOD!!!";

    bool Add_on = false;
    float total = 0.0;

    //name of four food items
    const string ITEM1 = "noodle";
    const string ITEM2 = "rice";
    const string ITEM3 = "soup";
    const string ITEM4 = "bread";
    const string ITEM5 = "quit";

    //how much food items need to pay
    const float COST_ITEM1 = 11;
    const float COST_ITEM2 = 12.5;
    const float COST_ITEM3 = 9.25;
    const float COST_ITEM4 = 9;
    const float COST_ITEM5 = 0;

    //add on cost
    const float COST_ADD_ON = 5;

    //welcome message
    cout << "Welcome to " << name << "\n" << slogan << endl;
    cout << "Here is the recipe: " << endl;
    //Menu choice list
    cout << "1." << left << setw(7) << ITEM1 << right << setw(7) << COST_ITEM1 << "$" << "\n";
    cout << "2." << left << setw(7) << ITEM2 << right << setw(7) << COST_ITEM2 << "$" << "\n";
    cout << "3." << left << setw(7) << ITEM3 << right << setw(7) << COST_ITEM3 << "$" << "\n";
    cout << "4." << left << setw(7) << ITEM4 << right << setw(7) << COST_ITEM4 << "$" << "\n";
    cout << "5." << left << setw(7) << ITEM5 << right << setw(7) << COST_ITEM5 << "$" << "\n";

    cin >> choice;


    switch (choice) {



        //food item1 choice
    case 1:
        total = COST_ITEM1;
        cout << "each Add on is " << COST_ADD_ON << "$" << endl;
        cout << "Do you want green onion? \n";
        //yes or no
        cout << "Y or N \n";
        cin >> Y_N;

        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want garlic? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want tofu? \n";
        cout << "Y or N \n";
        //yes or no
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;

        }
        break;


        //food item2 choice
    case 2:
        total = COST_ITEM2;
        cout << "each Add on is " << COST_ADD_ON << "$" << endl;
        cout << "Do you want beans? \n";
        cout << "Y or N \n";
        //yes or no
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want chicken? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want tofu? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;

        }
        break;


        //food item3 choice
    case 3:
        total = COST_ITEM3;
        cout << "each Add on is " << COST_ADD_ON << "$" << endl;
        cout << "Do you want green onion? \n";
        cout << "Y or N \n";
        //yes or no
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want shrimp? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want mushroom? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;


        }
        break;


        //food item4 choice
    case 4:
        total = COST_ITEM4;
        cout << "each Add on is " << COST_ADD_ON << "$" << endl;
        cout << "Do you want green onion? \n";
        cout << "Y or N \n";
        //yes or no
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want garlic? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;
        }

        cout << "Do you want tofu? \n";
        cout << "Y or N \n";
        cin >> Y_N;
        //if answer is yes
        if (Y_N == "Y" || Y_N == "y") {
            Add_on = true;
        }
        //if answer is no
        else if (Y_N == "N" || Y_N == "n") {
            Add_on = false;
        }
        //errors
        else {
            cout << "please choose Y or N" << endl;
            return 0;
        }

        //total of the add ons already choosen
        if (Add_on == true) {
            total = total + COST_ADD_ON;


        }
        break;


        //quit chose
    case'5':
        cout << "Thank you for visiting China Town, WE COOK YOUR BEST FOOD!!!\n";
        cout << "Good Bye" << endl;
        break;


        //answer other than 1,2,3,4,5
    default:
        cout << "Thank you for visiting China Town, WE COOK YOUR BEST FOOD!!!\n";
        cout << "Good Bye" << endl;
        break;
    }

    //total
    cout << "Thank you for ordering in China Town, WE COOK YOUR BEST FOOD!!!" << endl;
    cout << "Here is your total: \n" << total << "$" << endl;



	return 0;
}