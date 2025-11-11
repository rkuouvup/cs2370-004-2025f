//
//  inheritance.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 11/4/25.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Business {
public:
    void SetName(string busName) {name = busName;}
    void SetAddress(string busAddress) {address = busAddress;}
    virtual string GetDescription() const {return name + "--" + address;}
    virtual string GetHours() const = 0;
protected:
    string name;
    string address;
};

class Restaurant : public Business {
public:
    void SetRating(int userRating) {rating = userRating;}
    int GetRating() const {return rating;}
    string GetDescription() const override {
        return Business::GetDescription() + ": (Rating: " + to_string(rating) + ")";
        
    }
    void DisplayRestaurant() {
        cout << name << "--" << address << ": " << rating << endl;
    }
    
    string GetHours() const override {return "open";}
private:
    int rating;
};

void DriveTo(Business* b) {
    cout << "Drive to " << b->GetDescription() << endl;
}

/*int main() {
    //Business b1;
    Restaurant r1;
    //b1.SetName("my business");
    //b1.SetAddress("my address");
    r1.SetName("my favorite restaurant");
    r1.SetAddress("Orem");
    r1.SetRating(5);
    
    Business* bptr = &r1;
    
    //vector<Business*> bv;
    //bv.push_back(&b1);
    //bv.push_back(&r1);
    
    //for (auto e : bv)
    //    cout << e->GetDescription() << endl;
    
    //DriveTo(&b1);
    //DriveTo(&r1);
    //cout << b1.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    //cout << " Rating: " << r1.GetRating() << endl;
    //r1.DisplayRestaurant();
    return 0;
}*/
