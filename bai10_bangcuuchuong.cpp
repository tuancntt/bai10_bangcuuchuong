// bai10_bangcuuchuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*
    int so;
    cout << "nhap so";
    cin >> so;

    cout << "IN bANG CUU CHUONG VONG LAP FOR!\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << so << "x" << i << " = " << so * i << endl;
    }
    */


    for (int j = 2; j <= 10; j++) {
        for (int i = 2; i <= 9; i++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
