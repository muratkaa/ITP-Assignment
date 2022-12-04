//Murat Karadeniz 22.10.2021 Assignment 2 Part 1 
#include <iostream>
using namespace std;
int main() {
    float n1, n2;
    char op;
    cout << "Welcome to Murat Karadeniz's simple calculator, please choose your operator: \n \"+\" For addition ; \n \"-\"For subtraction ; \n \"/\" For division ;\n \"*\" For multiplication ; \n";
    cin >> op;
    cout << "Please enter your first number: ";
    cin >> n1;
    cout << "Please enter your second number: ";
    cin >> n2;
    if (op == '+') {
        cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
    }
    else if (op == '-') {
        cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
    }
    else if (op == '/') {
        cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
    }
    else if (op == '*') {
        cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
    }
    else
        cout << "You entered wrong value while you were choosing the operator. ";


    return 0;


}