// Test-Of-CplusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

//FUNCTIONS

void inputfunction(string test) {
	cout << "input fuction got " << test << endl;
}

//MAIN FUNCTION
int main()
{
	//VAR EXAMPELS
	string testvarstring = "test";
	int testvarint = 1;
	char testvarchar = 'A';
	double testvardouble = 1.2222222222;
	bool isTest = true;
		// END

	std::cout << "Just an Example!" << endl;

	cout << "this is a " << testvarstring << endl; //<-- you can use this OR
	std::cout << "this is a " << testvarstring << endl; //<-- this.

	inputfunction(testvarstring);
	return EXIT_SUCCESS; //Or you can return 0; TOO

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
