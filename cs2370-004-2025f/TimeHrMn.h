//
//  TimeHrMn.h
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/2/25.
//
#ifndef TIMEHRMN_H
#define TIMEHRMN_H

class TimeHrMn {
private:
    int hours;
    int minutes;
public:
    TimeHrMn(int hours = 0, int minutes = 0);
    void Print() const;
};

#endif
