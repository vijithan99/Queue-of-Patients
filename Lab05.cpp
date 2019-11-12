//============================================================================
// Name        : Lab05.cpp
// Author      : Vijithan Mangaleswaran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "OTPRegister.h"
#include "Patient.h"
#include <deque>
using namespace std;



int main() {

int i=0;
OTPRegister pat;
string name;
string condition;
int HealthNUm;
double cervix;
int userinput;


cout << "=========================" << endl;
cout << "There are currently " << i  << " patient(s) in the list" << endl;
cout << endl;



while(userinput !=4) {
	cout << "Please choose an option " << endl;
	cout << "1.  Register Patient" << endl;
	cout << "2.  Examine Patient"  << endl;
	cout << "3.  Display Patients" << endl;
	cout << "4.  Quit" << endl;

	cin >> userinput;
	if (userinput == 1){
		cout << "Enter Name: "; cin >> name;
		cout << "Enter Health Card Number: "; cin >> HealthNUm;
		condition = "UNKNOWN";
		cervix = 0.0;
		pat.admit(name,HealthNUm,condition,cervix, i);
		cout << ".. [Registering]" << endl;
		cout << endl;
	}

	if (userinput == 2){
		cout << "[Examine Patient]" << endl;
		pat.examine(condition, cervix, i);
	}


	if (userinput == 3)
		pat.display();

	if (userinput ==4){
		cout << "..[Quitting]" << endl;
		break;
	}


	cout << "=========================" << endl;
	cout << "There are currently " << i  << " patient(s) in the list" << endl;
	cout << endl;

	}

return 0;
}
