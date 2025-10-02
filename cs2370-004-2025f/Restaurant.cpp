//  Restaurant.cpp
#include "Restaurant.h"

int Restaurant::nextid = 101;

Restaurant::Restaurant() : name("No Name"), rating(-1), id(nextid){
    //name = "No Name";
    //rating = -1;
    //id = rand();
    nextid++;
}
Restaurant::Restaurant(string name, int rating) : id(nextid) {
    this->name = name;
    this->rating = rating;
    nextid++;
}

int Restaurant::GetNextId() {
    return nextid;
    //return id;
}

void Restaurant::Print() const {
    cout << id << ": " << name << " -- " << rating << endl;
}
string Restaurant::GetName() const {
    return name;
}
void Restaurant::SetName(string name) {
    this->name = name;
}
void Restaurant::SetRating(int myRating) {
    rating = myRating;
}
