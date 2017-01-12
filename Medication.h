//
//  Medication.hpp
//  Hospital
//
//  Created by Brian Morales on 1/10/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef Medication_hpp
#define Medication_hpp
#include <stdio.h>
#include "Patient.h"
#include <iostream>
using namespace std;

class Medication
{
private:
    int med;
public:
    void setmed(int i)
    {   med = i;    }
    void patfunc(Patient &p) const
    {
        if(med == 1)
            p.addChargest(25);
        if(med == 2)
            p.addChargest(50);
        if(med == 3)
            p.addChargest(75);
        if(med == 4)
            p.addChargest(100);
        if(med == 5)
            p.addChargest(125);
    }
 
};

#endif /* Medication_hpp */
