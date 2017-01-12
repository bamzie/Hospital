//
//  main.cpp
//  Hospital
//
//  Created by Brian Morales on 1/10/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#include <iostream>
#include "Patient.h"
#include "Surgery.h"
#include "Medication.h"
using namespace std;

void showtypeofsurgery();
void showmed();
int main()
{
    Patient patient1;
    Surgery surgery1;
    Medication pharm1;
    int cost;
    
    cout << "Please enter the amount of day your patient was in the hospital: ";
    cin >> cost;
    patient1.setdays(cost);
    
    showtypeofsurgery();
    cin >> cost;
    surgery1.settype(cost);
    surgery1.patfunc(patient1);
    showmed();
    cin >> cost;
    pharm1.setmed(cost);
    pharm1.patfunc(patient1);
    cout << "Total medical cost: " << patient1.getcharges() << endl;
    
  
}

void showtypeofsurgery()
{
    cout << "What kind of surgery did he have: \n";
    cout << "Type 1: press 1\n";
    cout << "Type 2: press 2\n";
    cout << "Type 3: press 3\n";
    cout << "Type 4: press 4\n";
    cout << "Type 5: press 5\n";
}

void showmed()
{
    cout << "What kind of medication was he on: \n";
    cout << "Type 1: press 1\n";
    cout << "Type 2: press 2\n";
    cout << "Type 3: press 3\n";
    cout << "Type 4: press 4\n";
    cout << "Type 5: press 5\n";
}
