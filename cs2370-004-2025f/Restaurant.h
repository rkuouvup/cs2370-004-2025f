//  Restaurant.h
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
using namespace std;

class Restaurant {
private:
    string name = "No Name";
    int rating = -1;
public:
        /*void Print() {
            cout << "Restaurant and Rating" << endl;
        }*/
    void Print();
    string GetName();
};

#endif

