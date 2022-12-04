//Murat Karadeniz's Assignment 3 --- date: 20.11.2021   ----  student number: 1306200011---
#include <iostream>
using namespace std;
int main() {
	cout << "**** MY MENU ****" << endl << "1. Addition" << endl << "2. Subtraction" << endl << "3. Division" << endl << "4. Multiplication" << endl << "5. Modulo" << endl << "6. Exit" << endl;
	int choice, n1, n2;
	cout << "Please enter your choice: ";
	cin >> choice;        
	if (choice < 6) {
		cout << "Please enter two numbers: ";
		cin >> n1 >> n2;
		if (choice == 1)
			cout << n1 << "+" << n2 << "=" << n1 + n2;
		else if (choice == 2)
			cout << n1 << "-" << n2 << "=" << n1 - n2;
		else if (choice == 3)
			cout << n1 << "/" << n2 << "=" << n1 / n2;
		else if (choice == 4)
			cout << n1 << "*" << n2 << "=" << n1 * n2;
		else if (choice == 5)
			cout << n1 << "%" << n2 << "=" << n1 % n2;

	}
	else if (choice == 6)
		cout << "Exiting from the menu...";
	else
		cout << "You did invalid choice...";

	

	
	



	return 0;
}