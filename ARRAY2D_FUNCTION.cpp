// ARRAY2D_FUNCTION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int max_row = 2;
const int max_col = 3;


void read_array(int marks[][max_col], int max_row);
void print_array(int marks[][max_col], int max_row);

int main()
{
	int marks[max_row][max_col];
	read_array(marks, max_row);
	print_array(marks, max_row);


	return 0;
}


void read_array(int marks[][max_col], int max_row)
{
	for (int row = 0; row < max_row; row++)
	{
		for (int col = 0; col < max_col; col++)
		{
			cout << "Enter value for marks[" << row << "][" << col << "]:";
			cin >> marks[row][col];
		}
	}

}

void print_array(int marks[][max_col], int max_row)
{
	cout << "\nMarks array:\n";

	for (int row = 0; row < max_row; row++)
	{
		for (int row = 0; row < max_row; row++)
		{
			for (int col = 0; col < max_col; col++)
			{
				cout << marks[row][col] << " ";
			}
			cout << endl;
		}
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
