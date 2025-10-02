//
//  TimeHrMn.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/2/25.
//
#include <iostream>
#include "TimeHrMn.h"
using namespace std;

TimeHrMn::TimeHrMn(int hours, int minutes) {
    int carry = 0;
    if (minutes < 0) {
        this->minutes = 0;
    } else if (minutes >= 0 && minutes < 60) {
        this->minutes = minutes;
    } else {
        this->minutes = minutes % 60;
        carry = minutes / 60;
    }
    this->hours = hours + carry;
}

