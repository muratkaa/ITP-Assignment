//Murat Karadeniz's Assignment 6 -------- student no : 1306200011 ------------ date: 13.12.2021

#include <iostream>
using namespace std;

void sum(double, double);
void difference(double, double);
void product(double, double);
void quo(double,double);


int main() {
	double num1, num2;
	cout << "Please enter two numbers : ";
	cin >> num1 >> num2;
	sum(num1, num2);
	cout << endl;
	difference(num1, num2);
	cout << endl;
	product(num1, num2);
	cout << endl;
	quo(num1, num2);

	return 0;
}


void sum(double a, double b) {
	double result;
	result = a + b;
	cout << a << " + " << b << " = " << result;
}
void difference(double a, double b) {
	double result;
	result = a - b;
	cout << a << " - " << b << " = " << result;
}
void product(double a, double b) {
	double result;
	result = a * b;
	cout << a << " * " << b << " = " << result;
}
void quo(double a, double b) {
	double result;
	result = a / b;
	cout << a << " / " << b << " = " << result;
}

