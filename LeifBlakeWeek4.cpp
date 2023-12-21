// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

int calculateFactorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * calculateFactorial(n - 1);
	}
}

void factorial() {
	int number;
	do {
		cout << "Enter a number: ";
		cin >> number;
		if (number < 0) {
			cout << "Please enter a positive number." << endl;
		}
	} while (number < 0);

	cout << number << "! = ";
	for (int i = number; i >= 1; --i) {
		cout << i;
		if (i > 1) {
			cout << " * ";
		}
	}
	cout << " = " << calculateFactorial(number) << endl;
}

void arithmetic() {
	{
		int difference, startNumber, numElements;
		do {
			cout << "Enter the difference: ";
			cin >> difference;
			cout << "Enter the starting number: ";
			cin >> startNumber;
			cout << "Enter the number of elements: ";
			cin >> numElements;
		} while (numElements <= 0);

		cout << "Arithmetic Series: ";
		int sum = 0;
		for (int i = 0; i < numElements; ++i) {
			cout << startNumber + i * difference;
			if (i < numElements - 1) {
				cout << " + ";
			}
			sum += startNumber + i * difference;
		}
		cout << " = " << sum << endl;
	}
}

	void geometric() {
		double ratio, startNumber;
		int numElements;
		do {
			cout << "Enter the starting number: ";
			cin >> startNumber;
			cout << "Enter a number to multiply by each time: ";
			cin >> ratio;
			cout << "Enter the number of elements: ";
			cin >> numElements;
		} while (numElements <= 0);

		cout << "Geometric Series: ";
		double sum = 0;
		for (int i = 0; i < numElements; ++i) {
			cout << startNumber * pow(ratio, i);
			if (i < numElements - 1) {
				cout << " + ";
			}
			sum += startNumber * pow(ratio, i);
		}
		cout << " = " << sum << endl;
	}

int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		if (choice > 3 || choice < 1) {
			break;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	return 0;
}
