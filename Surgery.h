//
//  Surgery.hpp
//  Hospital
//
//  Created by Brian Morales on 1/10/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef Surgery_hpp
#define Surgery_hpp
#include "Patient.h"
#include <stdio.h>
#include <iostream>
using namespace std;

class Surgery
{
private:
    int type;
public:
    void settype(int i)
    { type = i;     }
    void patfunc(Patient &p)
    {
        if(type == 1)
            p.addChargest(100);
        if(type == 2)
            p.addChargest(200);
        if(type == 3)
            p.addChargest(300);
        if(type == 4)
            p.addChargest(400);
        if(type == 5)
            p.addChargest(500);
    }
};
#endif /* Surgery_hpp */
