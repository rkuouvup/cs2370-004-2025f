//  Restaurant.cpp
#include "Restaurant.h"

Restaurant::Restaurant() : name("No Name"), rating(-1), id(rand()){
    /*name = "No Name";
    rating = -1;
    id = rand();*/
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
