// TruthTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	// Initialize and declare variables
	bool True = true;
	bool False = false;
	bool printOutput = false;	

	
	cout << "Truth Table\n";

	cout << "\nTrue  && True = " << (printOutput = true && true) << endl;

	cout << "True  && False = " << (printOutput = true && false) << endl;

	cout << "False && True = " << (printOutput = false && true) << endl;

	cout << "False && False = " << (printOutput = false && false) << endl;
	
	cout << "                    " << endl;

	cout << "True  || True = " << (printOutput = true || true) << endl;

	cout << "True  || False = " << (printOutput = true || false) << endl;

	cout << "False || True = "<< (printOutput = false || true) << endl;

	cout << "False || False = " << (printOutput = false || false) << endl;
	cout << "                    " << endl;

	system("PAUSE");
	return 0;
}

