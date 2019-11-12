/*
 * OTPRegister.cpp
 *
 *  Created on: Nov 11, 2019
 *      Author: vmangale
 */

#include "OTPRegister.h"
#include "Patient.h"
#include <iomanip>
OTPRegister :: OTPRegister(){

}

OTPRegister :: ~OTPRegister(){
int qsize = q.size();

	for(int i=0; i<qsize;++i){
		delete q[i];
		q[i] =0;

	}
}

void OTPRegister :: admit( string name, int Health, string condition, double cervix, int &i){
	Patient * p = new Patient(name, Health, condition, cervix);
	q.push_back(p);
	i++;
}

void OTPRegister :: examine(string condition, double  cvixdil, int &i){
	if (q.empty()) return;

	Patient * p = q[0];

	q.pop_front();

	cout << "Name: " << p->getName() << endl;
	cout << "Health Card Number: " << p-> Healthcard() << endl;
	cout << "Enter Cervix Dilation: "; cin >> cvixdil;
	p->setcvixdilation(cvixdil);

	if (cvixdil >= 4.0){
		p->setcondition("ADMIT");
		cout << p->getName() << "   " << p->Healthcard() << "   " << p->cvixdilation() << "   " << p->getcondition() << endl;
		cout << endl;
		delete p;
		p=0;
		i=i-1;
	}
	if (cvixdil < 4.0){
		cout << " ..[Going back to queue]" << endl;

		p->setcondition("LABOUR");
		q.push_back(p);
		cout<<endl;
	}
}

void OTPRegister:: display(){
	cout << setw(15) <<  "             [Display Patients]" << endl;
	int qSize = q.size(); //gets the size of the queue

	for (int i=0; i<qSize;i++ ){
		cout << setw(10) << q[i]->getName()<< setw(10) << q[i]->Healthcard() << setw(10) ;
		cout << q[i]->cvixdilation() << setw(10) << q[i]->getcondition() << endl;   //display function
	}
	cout << endl;
}

