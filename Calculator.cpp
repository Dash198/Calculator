// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Calc.h"
#include <iostream>
using namespace std;

int main()
{
	Calc ca;
	int c = 0, a = 0, b = 0;
	cout << "Calculator\n\nPress \n1 to calculate a+b\n2 to calculate a-b\n3 to calculate a*b\n4 to calculate a/b\n";
	cin >> c;
	cout << "Enter the two numbers \n";
	cin >> a >> b;
	if (c == 1)
		cout << "Sum = " << ca.add(a, b) << "\n";
	else if (c == 2)
		cout << "Difference = " << ca.subtract(a, b) << "\n";
	else if (c == 3)
		cout << "Product = " << ca.multiply(a, b) << "\n";
	else if (c == 4)
		cout << "Quotient = " << ca.divide(a, b) << "\n";
	else
		cout << "Wrong Input!\n";
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
