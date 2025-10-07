#include <iostream>
using namespace std;
int main() {
	int age{};
	char choice;
	cout << "Enter your age: ";
	cin >> age;
	if (age < 0 or age >120) {
		cout << "Invalid age.\n";
	}
	else {
		if (age >= 18) {
			cout << "Are you a citizen?:  ";
			cin >> choice;
			if (choice == 'Y') {
				cout << "You are eligible to vote";
			}
			else {
				cout << "You must be a citizen to vote\n";
			}
		}
		else {
			if (age < 18) {
				cout << "Are you a citizen?:  ";
				cin >> choice;
				if (choice == 'Y') {
					cout << "You are too young to vote.\n";
				}
			}
		}
	}
	return 0;
}
