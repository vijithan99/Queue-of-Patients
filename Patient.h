/*
 * Patient.h
 *
 *  Created on: Nov 11, 2019
 *      Author: vmangale
 */

#ifndef PATIENT_H_
#define PATIENT_H_
#include <iostream>

using namespace std;

class Patient{
private:
string name; int HCNumber; string condition; double cervixdilation;
public:
Patient(string, int, string, double);
~Patient();
const string& getName();
const int Healthcard();
const string getcondition();
void setcondition(string);

const double cvixdilation();
void setcvixdilation(double);
};


#endif /* PATIENT_H_ */
