//Murat Karadeniz's Assignment 4 - 2   ------- student number : 1306200011
#include <iostream>
using namespace std;
int main() {

	int lines;
	cout << "How many lines do you want to list? = ";
	cin >> lines;

	for (int j = 0; j <= lines/2; j++) {
		for (int i = 1; i <= lines - (1 + (j * 2)); i++) {
			cout << " ";
		} 
		for (int i = 0; i <= j; i++) {
			cout << "*";
		} cout << endl;
	}
	for (int j = 0; j < lines / 2; j++) {
		for (int i = 0; i <= j; i++) {
			cout << "  ";

		}
		for (int i = 1;  i <= (lines/2)-j ; i++) {
			cout << "*";
		}cout << endl;
	}
	
}
