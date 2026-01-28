// Highest Value in Each Row.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    const int STUDENTS = 3;
    const int SUBJECTS = 4;
    int marks[STUDENTS][SUBJECTS];


    cout << "Enter marks for 3 students and 4 subjects:  \n";

    for (int row = 0; row < STUDENTS; row++)
    {
        cout << "Student " << (row + 1) << ":\n";

        for (int col = 0; col < SUBJECTS; col++)
        {
            cout << "   Subject " << (col + 1) << ": ";
            cin >> marks[row][col];

        }
    }


    cout << "\nHighest mark for each student: " <<endl;
    for (int row = 0; row < STUDENTS; row++)
    {
        int  max_value = marks[row][0];
        for (int col = 1; col < SUBJECTS; col++)
        {
            if (marks[row][col] > max_value)
                max_value = marks[row][col];
        }
        cout << "Student " << (row + 1) << " highest = " << max_value << endl; 
    }

    return 0;
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
