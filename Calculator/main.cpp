#include <iostream>
using namespace std;

int calcOption = 0;
int calcSize = 0;

void intro() {
	cout << "Greetings user!" << endl << endl;
	cout << "We are preparing everything, please wait a second..." << endl << endl;
	for (int i = 0; i <= 100; i += 20) {
		cout << i << "%" << endl;
	}
	cout << endl;

	for (int i = 0; i <= 60; i++) {
		cout << "-";
	}
	cout << endl << endl;
}

void options() {
	int UncheckedOption = 0;
	int UncheckedSize = 0;

	do {
		cout << "Please select your operation:" << endl << endl;
		cout << "1: addition" << endl;
		cout << "2: subtraction" << endl;
		cout << "3: multiplication" << endl;
		cout << "4. division" << endl;

		cout << endl << "Operation: ";
		std::cin >> UncheckedOption;
		cout << endl;

		if (UncheckedOption > 4) {
			cout << "Invalid option! Please try again..." << endl;
		}
		else {
			calcOption = UncheckedOption;
			break;
		}
	} while (true);

	for (int i = 0; i <= 60; i++) {
		cout << "-";
	}
	cout << endl << endl;

	cout << "Thanks...now please enter the ammout of numbers, that the operation should handle!" << endl;
	std::cin >> UncheckedSize;

}

int main() {
	intro();
	options();
}