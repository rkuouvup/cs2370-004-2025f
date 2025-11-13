//
//  p5_ex1.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 11/11/25.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class GFG {
public:
    float x, y;
    GFG(float x=0, float y=0) : x(x), y(y) {cout << "constructor: " << x << " " << y << endl;}
    GFG(const GFG& GFG) :x(GFG.x), y(GFG.y) {cout << "copy: " << x << " " << y << endl;}
    ~GFG() {cout << "destructor: " << x << " " << y << endl;}
};

/*int main() {
    vector<GFG> v;
    v.reserve(4);
    
    int c = 0;
    for (int i = 0; i < 4; i++) {
        cout << "========" << i << "========" << endl;
        //GFG g(c+1, c+2);
        //v.push_back(g);
        //v.push_back(GFG(c+1, c+2));
        v.emplace_back(c+1, c+2);
        c = c+3;
    }
    cout << "======= end of the program ========" << endl;
    
    
    return 0;
}*/

/*int main() {
    //vector<GFG> container;
    list<GFG> container;
    
    int c = 0;
    for (int i = 0; i < 4; i++) {
        cout << "========" << i << "========" << endl;
        container.emplace_back(c+1, c+2);
        c = c+3;
    }
    
    
    return 0;
}*/


