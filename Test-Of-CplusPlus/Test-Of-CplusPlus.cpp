// Test-Of-CplusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
#include "Anotherclass.h"

using namespace std;

//CLASSES
class Testclass {
	private:
		string privatetext;
	public:
		Testclass() { //Constructor for Testclass
			cout << "You called the test class." << endl;
		}

		//FUNCTIONS IN Testclass
		void SetPrivateText(string TMPtext) { //A Setter for var privatetext
			this->privatetext = TMPtext;
		}
		string GetPrivateText() { //A Getter for var privatetext
			return this->privatetext;
		}
};

//FUNCTIONS
void testfunction(string test) {
	cout << "input fuction got " << test << endl;
}

string whatisyournamefunction() {
	string name;
	cout << "Enter your name!" << endl;
	//cin >> name;
	//OR
	getline(cin, name);
	//cout << "Your name is " << name << endl;
	return name;
}

//MAIN FUNCTION
int main()
{
	//VAR EXAMPELS
	string TEMP;
	string testvarstring = "test";
	int testvarint = 1;
	char testvarchar = 'A';
	double testvardouble = 1.2222222222;
	bool isTest = true;

	int listint[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	string liststring[] = { "hello ", "my ", "name ", "is ", "@name " };
	// END OF VAR EXAMPLES

	std::cout << "Just an Example!" << endl;

	cout << "this is a " << testvarstring << endl; //<-- you can use this if you ARE using the namespace of std.
	std::cout << "this is a " << testvarstring << endl; //<-- Or this if your NOT using namespace of std.

	//RUN FUNCTIONS
	testfunction(testvarstring);
	TEMP = whatisyournamefunction();
	//END
	liststring[4] = TEMP; //CHANGES 4 thing in the list too TMP;
	cout << liststring[0] << liststring[1] << liststring[2] << liststring[3] << liststring[4] << endl; //HOPE you get it xD

	Testclass testclass; //Calls the constructor of Testclass and also makes an object.
	testclass.SetPrivateText("hehe");
	cout << "The private text is " << testclass.GetPrivateText() << endl;

	//Calls Another class from another class lol.
	Anotherclass anotherclass;
	cout << anotherclass.test() << endl;

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
