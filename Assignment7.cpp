//Murat Karadeniz's Assignment 7 ------- student no: 130620011  ---------  date 25.12.2021
#include <iostream>
using namespace std;

bool prime(int);


int main() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    if (prime(number) == 1)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
}

bool prime(int num) {
    if (num == 2)
        return true;
    else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0)
                return false;
            else
                return true;
        }
    }
}



