// Supermarket Weekly Sales Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    const int ITEMS = 5;
    const int COLS = 2;
    int cart[ITEMS][COLS];

    cout << "Enter price and quantity for 5 items: \n";
    for (int row = 0; row < ITEMS; row++)
    {
        cout << "Item " << (row + 1) << " price: ";
        cin >> cart[row][0];

            cout << "Item " << (row + 1) << " quantity: ";
            cin >> cart[row][1];
    }
        
    cout << "\nItem\tPrice\tQty\tSubtotal\n";

    int total = 0;

    for (int row = 0; row < ITEMS; row++)
    {
        int price = cart[row][0];
        int qty = cart[row][1];
        int subtotal = price * qty;

        cout << (row + 1) << "\t" << price << "\t" << qty << "\t" << subtotal << endl;

        total += subtotal;
    }


    cout << "----------------------------------------------------\n";
    cout << "Total\t\t\t" << total << endl;



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
