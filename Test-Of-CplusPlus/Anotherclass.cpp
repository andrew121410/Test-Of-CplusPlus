#include "pch.h"
#include <iostream>
#include <string>
#include "Anotherclass.h"

using namespace std;

Anotherclass::Anotherclass()
{
	cout << "You called Anotherclass.cpp" << endl;
}

string Anotherclass::test() {
	return "Hello you returned this";
}


Anotherclass::~Anotherclass()
{
}