// C++ Basics

/*
Syntax, data types, variables, and operators.
Control structures (if statements, loops, switches).
Functions and function overloading.
Classes and objects.
*/

#include <iostream>

using namespace std;

int menu() {
	int option;

	cout << "***************************\n Menu:\n 1-. Sum two numbers\n 2-. Substract two numbers\n 3-. Multiply two numbers\n 4-. Division two numbers\n ***************************\n" << endl << "Select the option what you want to do:";
	cin >> option;
	cout << "You selected the option: " << option << endl;
	system("pause");
	system("cls");
	return option;
}

void sum() {
	system("cls");
	double number1, number2;
	cout << "Sum of two numbers\n";
	cout << "Insert number one: ";
	cin  >> number1;
	cout << "Insert number two: ";
	cin  >> number2;
	cout << "The result is " << number1 + number2 << endl;
	cout << "Thanks for use my program :) \n";
	system("pause");
}

void substract() {
	system("cls");
	double number1, number2;
	cout << "Substract of two numbers\n";
	cout << "Insert number one: ";
	cin >> number1;
	cout << "Insert number two: ";
	cin >> number2;
	cout << "The result is " << number1 - number2 << endl;
	cout << "Thanks for use my program :) \n";
	system("pause");
}

void multiply() {
	system("cls");
	double number1, number2;
	cout << "Multiply of two numbers\n";
	cout << "Insert number one: ";
	cin >> number1;
	cout << "Insert number two: ";
	cin >> number2;
	cout << "The result is " << number1 * number2 << endl;
	cout << "Thanks for use my program :) \n";
	system("pause");
}

void division() {
	system("cls");
	double number1, number2;
	cout << "Division of two numbers\n";
	cout << "Insert number one: ";
	cin >> number1;
	cout << "Insert number two: ";
	cin >> number2;
	cout << "The result is " << number1 / number2 << endl;
	cout << "Thanks for use my program :) \n";
	system("pause");
}

void main()
{
	int op = 0;
	//Data types and variables
	int x; //integer numbers
	double price; // decimal numbers
	char product[50]; // characters
	bool available = true; // true or false

	// Control Structures
	do {
		op = menu();
		if (op > 4) {
			cout << "Select a valid option \n";
			op = menu();
		}
	} while (op == 0 || op > 4);
	switch (op) {
		case 1:
			sum();
			break;
		case 2:
			substract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			division();
	}
}