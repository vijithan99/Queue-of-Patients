/*
 * OTPRegister.h
 *
 *  Created on: Nov 11, 2019
 *      Author: vmangale
 */

#ifndef OTPREGISTER_H_
#define OTPREGISTER_H_

#include <iostream>
#include <deque>
#include "Patient.h"
#include <iomanip>
using namespace std;

class OTPRegister{
private:
deque <Patient * > q;
public:
OTPRegister();
~OTPRegister();
void admit(string, int, string, double, int&);
void examine(string, double, int&);
void display();

};



#endif /* OTPREGISTER_H_ */
