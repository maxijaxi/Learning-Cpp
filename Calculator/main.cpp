#include <iostream>
#include <limits>
using namespace std;

int calcOption = 0;
int calcSize = 0;

// input error handling
int inputChecker(string text) {
	int output = 0;
	while (!(std::cin >> output)) {
		std::cout << "Invalid input...please enter an integer!" << endl << endl << text;
		std::cin.clear(); 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return output;
}

// setting options for calculation
void options() {
	cout << "Please select your operation:" << endl << endl;
	cout << "1: addition" << endl;
	cout << "2: subtraction" << endl;
	cout << "3: multiplication" << endl;
	cout << "4. division" << endl;

	// check input
	do {
		cout << endl << "Operation: ";
		int UncheckedOption = inputChecker("Operation: ");
		cout << endl;

		if (UncheckedOption <= 4) {
			calcOption = UncheckedOption;
			break;
		}
		else {
			cout << "Invalid option! Please try again..." << endl;
		}
	} while (true);

	for (int i = 0; i <= 60; i++) {
		cout << "-";
	}

	cout << endl << endl;
	cout << "Thanks...now please enter the amount of numbers, that the operation should handle!" << endl;

	// check input
	do {
		cout << endl << "Amount: ";
		int UncheckedSize = inputChecker("Amount: ");
		cout << endl;
		if (UncheckedSize == 0) {
			cout << "Ok...I see what you did there! In this case, fuck you too!";
			exit(0);
		}
		else if (UncheckedSize == 1) {
			cout << "There is no point of taking a number and doing nothing with it..." << endl;
			cout << "Try again, but use your god damn brain this time." << endl;
		}
		else {
			calcSize = UncheckedSize;
			break;
		}
	} while (true);
}

int main() {
	// hello message
	cout << "Greetings user!" << endl << endl;

	for (int i = 0; i <= 60; i++) {
		cout << "-";
	}
	cout << endl << endl;

	// setting options for calculation
	options();
}