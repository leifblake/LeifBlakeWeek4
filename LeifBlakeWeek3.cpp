#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << std::endl;
	cout << "2. Subtraction" << std::endl;
	cout << "3. Multiplication" << std::endl;
	cout << "4. Division" << std::endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
}
void firstChoice(float A, float B) {
	float result = A + B;
	std::cout << A;
	std::cout << "+" << B << "=";
	std::cout << result << std::endl;
}
void secondChoice(float A, float B) {
	float result = A - B;
	std::cout << A;
	std::cout << "-" << B << "=";
	std::cout << result << std::endl;
}
void thirdChoice(float A, float B) {
	float result = A * B;
	std::cout << A;
	std::cout << "*" << B << "=";
	std::cout << result << std::endl;
}
void fourthChoice(float A, float B) {
	float result = A / B;
	std::cout << A;
	std::cout << "/" << B << "=";
	std::cout << result << std::endl;
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		fourthChoice(A, B);
	}
	return 0;
}