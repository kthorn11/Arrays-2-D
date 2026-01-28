// Matrix Copy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 2;
    const int COLS = 3;

    int table_A[ROWS][COLS];
    int table_B[ROWS][COLS];


    cout << "Enter viewers for matrix A (2x3): \n";
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << "A[" << row << "][" << col << "]: ";
            cin >> table_A[row][col];
        }
    }

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            table_B[row][col] = table_A[row][col];
        }
    }

    cout << "Matrix B (copy of A): \n";
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout << table_B[row][col] << "\t";
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
