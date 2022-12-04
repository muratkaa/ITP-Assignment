// Murat Karadeniz's Assingment 3  ----- student no = 1306200011   --------- date = 24.11. 2021    ( ı have uploaded this assignment for second time, because in my first code ı have forgotten create the while loop.)

#include <iostream>
using namespace std;
int main() {
	cout << "**** MY MENU ****" << endl << "1. Addition" << endl << "2. Subtraction" << endl << "3. Division" << endl << "4. Multiplication" << endl << "5. Modulo" << endl << "6. Exit" << endl;
	int defaultChoice, n1, n2, choice;
	
	defaultChoice = 1;

	while (defaultChoice < 6) {
		cout << "Please enter your choice: ";
		cin >> choice;
		if (choice >= 6)
			break;

		cout << "Please enter two numbers: ";
		cin >> n1 >> n2;
		if (choice == 1)
			cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
		else if (choice == 2)
			cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
		else if (choice == 3)
			cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
		else if (choice == 4)
			cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
		else if (choice == 5)
			cout << n1 << "%" << n2 << "=" << n1 % n2 << endl;





	}
	if (choice == 6)
		cout << "Exiting from the program...";
	else
		cout << "Invalid choice...";
	
	return 0;
}