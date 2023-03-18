#include <iostream>
using namespace std;

int calcOption = 0;
int calcSize = 0;

void intro() {
	cout << "Greetings user!" << endl;
	cout << "We are preparing everything, please wait a second...";
	for (int i = 0; i <= 100; i += 20) {
		cout << i << "%" << endl;
	}
}

void options() {

}

int main() {
	intro();

}