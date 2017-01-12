//
//  Patient.hpp
//  Hospital
//
//  Created by Brian Morales on 1/10/17.
//  Copyright © 2017 Brian Morales. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp
#include <stdio.h>
#define DailyRate 10.00

class Patient
{
private:
    double charges;
    int days;
public:
    Patient()
    {   charges = 0;        //total charges when check out
        days = 0;
    }
    void setdays(int i)
    {   days = i;   }
   
    void addChargest(int c)
    {
        charges+=c;
    }
    double getcharges() const
    { return days * DailyRate + charges;    }
};


#endif /* Patient_hpp */
