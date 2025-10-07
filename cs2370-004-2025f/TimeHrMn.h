//
//  TimeHrMn.h
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/2/25.
//
#ifndef TIMEHRMN_H
#define TIMEHRMN_H

class TimeHrMn {
    friend TimeHrMn operator+(int lhs, TimeHrMn rhs);
    friend bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs);
private:
    int hours;
    int minutes;
public:
    TimeHrMn(int hours = 0, int minutes = 0);
    //int GetHours() const {return hours;}
    //int GetMinutes() const {return minutes;}
    TimeHrMn operator+(TimeHrMn rhs);
    //bool operator==(TimeHrMn rhs);
    void Print() const;
};

bool operator==(const TimeHrMn& lhs, const TimeHrMn& rhs);
TimeHrMn operator+(int lhs, TimeHrMn rhs);

#endif
