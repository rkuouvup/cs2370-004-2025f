//
//  favorite.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 9/25/25.
//
#include <iostream>
#include "Restaurant.h"
using namespace std;



int main() {
    Restaurant r1;
    r1.Print();
    r1.SetName("Wing Fat");
    // Restaurant::SetName(r1, "Wing Fat");
    r1.SetRating(5);
    r1.Print();
    
    Restaurant r2;
    r2.SetName("Burger King");
    r2.SetRating(2);
    r2.Print();
    //cout << r1.GetName() << endl;
    return 0;
}
