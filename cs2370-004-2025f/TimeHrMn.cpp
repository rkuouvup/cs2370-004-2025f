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
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal(this->hours + rhs.hours, this->minutes + rhs.minutes);
    return timeTotal;
}

void TimeHrMn::Print() const {
    cout << hours << ":" << minutes << endl;
}

/*bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs) {
    return (lhs.GetHours() == rhs.GetHours() && lhs.GetMinutes() == rhs.GetMinutes());
}
TimeHrMn operator+(int lhs, TimeHrMn rhs) {
    TimeHrMn totalTime(lhs + rhs.GetHours(), rhs.GetMinutes());
    return totalTime;
}*/

bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs) {
    return (lhs.hours == rhs.hours && lhs.minutes == rhs.minutes);
}
TimeHrMn operator+(int lhs, TimeHrMn rhs) {
    TimeHrMn totalTime(lhs + rhs.hours, rhs.minutes);
    return totalTime;
}


