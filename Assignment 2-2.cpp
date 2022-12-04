//Murat Karadeniz 22.10.2021 Assignment 2 Part 2
#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char a;
	cout << "Please enter a character that you wanted to change its case: ";
	cin >> a;
	if (islower(a)) {
		a = a - 32;
		cout << "Your uppercase letter is : " << a;
	}
	else if (isupper(a)) {
		a = a + 32;
		cout << "Your lowercase letter is : " << a;
	}
	else
		cout << "Please enter a valid character.";
	
	return 0;

}