//  Restaurant.h
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Restaurant {
private:
    string name;
    int rating;
    const int id;
public:
    Restaurant();
        /*void Print() {
            cout << "Restaurant and Rating" << endl;
        }*/
    void SetName(string name);
    void SetRating(int myRating);
    void Print() const;
    string GetName() const;
};

#endif

