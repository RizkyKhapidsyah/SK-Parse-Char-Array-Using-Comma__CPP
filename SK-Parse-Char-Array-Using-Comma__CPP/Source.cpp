#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main() {
	char arr[100];
	cout << "\n Input any string upto 100 length : ";
	cin >> arr;
	int counter = 0;

	for (int i = 0; i < strlen(arr); i++) {
		if (counter == 1 && arr[i] == ',') {
			//do not print it
		} else {
			cout << arr[i];
		}

		if (arr[i] == ',') {
			counter++;

			if (counter == 2) {
				counter = 0;
				cout << "\n";
			}
		}
	}

	_getch();
	return 0;
}