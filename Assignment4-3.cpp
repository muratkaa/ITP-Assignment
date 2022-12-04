<//Murat Karadeniz's Assignment 4-3 --------- student no: 1306200011
#include <iostream>
using namespace std;


int main() {
    int lines;
    cout << "How many lines do you want?: ";
    cin >> lines;
    if (lines % 4 == 0) {
        for (int i = 4; i <= lines; i = i + 4)
        {

            cout << "    ******    " << endl;
            cout << "  **********   " << endl;
            cout << " ************  " << endl;
            cout << "  **********   " << endl;

        }
    }
    
    else if (lines % 4 == 1) {
        for (int i = 4; i < lines; i = i + 4)
        {

            cout << "    ******    " << endl;
            cout << "  **********   " << endl;
            cout << " ************  " << endl;
            cout << "  **********   " << endl;

        }    cout << "    ******    " << endl;


    }
    else if (lines % 4 == 2) {
        for (int i = 4; i < lines; i = i + 4)
        {

            cout << "    ******    " << endl;
            cout << "  **********   " << endl;
            cout << " ************  " << endl;
            cout << "  **********   " << endl;

        }    cout << "    ******    " << endl;
        cout << "  **********   " << endl;

    }
    else if (lines % 4 == 3) {
        for (int i = 4; i < lines; i = i + 4)
        {

            cout << "    ******    " << endl;
            cout << "  **********   " << endl;
            cout << " ************  " << endl;
            cout << "  **********   " << endl;

        }    cout << "    ******    " << endl;
        cout << "  **********   " << endl;
        cout << " ************  " << endl;

    }





    return 0;
}