// CurrencyConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "C:\Users\jeffh\source\repos\std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollar = 0.0073;
    constexpr double kroner_per_dollar = 0.10;
    constexpr double pounds_per_dollar = 1.17;
                                                                               
    double amount = 1;                                         
                                                                         
    char unit = ' ';                                               
    cout << "Please enter the amount of currency followed by a unit (y, k, or p):\n";
    cin >> amount >> unit;

    if (unit == 'y')
        cout << amount << " yen in dollars == " << "$" << yen_per_dollar * amount << "\n";
    else if (unit == 'k')
        cout << amount << " kroner in dollars == " << "$" << kroner_per_dollar * amount << "\n";
    else if (unit == 'p')
        cout << amount << " pounds in dollars == " << "$" << pounds_per_dollar * amount << "\n";
    else
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
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
