//Murat Karadeniz's Assignment 4-1  ---------- student no = 1306200011      

#include <iostream>

using namespace std;

int main() {
    int lines,i, j;                                                                                             
    cout << "Please enter value of line that you want to list:  ";
    cin >> lines;
    cout << endl;
    for (i = 0; i < lines; i++)
    {
        for (j = 0; j < lines; j++)
        {
            if (lines % 2 == 0) {
                if (j > i - 2 && j < lines - i && i % 2 == (lines & 1))
                    cout << "x";
                else if (j < i - 1 && j < lines - i && j % 2 == (lines & 1))
                    cout << "x";
                else if (j > lines -i- 1 && j > i && j % 2 == ((lines + 1) & 1))
                    cout << "x";
                else if (j < i + 1 && j > lines - i - 1 && i % 2 == ((lines + 1) & 1))
                    cout << "x";
                else
                    cout << " ";
            }
            else {
                if (j > i - 2 && j < lines - i && i % 2 == 0)
                    cout << "x";
                else if (j < i - 1 && j < lines - i && j % 2 == 0)
                    cout << "x";
                else if (j > lines - i - 1 && j > i && j % 2 == 0)
                    cout << "x";
                else if (j < i + 1 && j > lines - i - 1 && i % 2 == 0)
                    cout << "x";
                else
                    cout << " ";
            }
        }cout << endl;
    }
}