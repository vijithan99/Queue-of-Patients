/*
 * Patient.cpp
 *
 *  Created on: Nov 11, 2019
 *      Author: vmangale
 */

#include "Patient.h"
Patient :: Patient(string theName, int HCN, string cond, double cervix){
	name = theName;
	HCNumber = HCN;
	condition = cond;
	cervixdilation = cervix;

}

Patient :: ~Patient(){
}
const int Patient :: Healthcard(){
	return HCNumber;

}

const string& Patient :: getName(){
	return name;

}

void Patient :: setcondition(string condition){
	this-> condition = condition;

}
const string Patient :: getcondition(){
	return condition;
}

void Patient :: setcvixdilation(double cervix){
	cervixdilation = cervix;
}

const double Patient :: cvixdilation(){
	return cervixdilation;
}



