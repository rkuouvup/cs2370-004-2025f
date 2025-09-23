#include <iostream>
#include "point.h"
using namespace std;

int main() {
    //int i = 0;
    point_t p1 = {3.0, 4.0};
    point_t p2 = {-100, -100};
    init_point(p2, 0.0, 0.0);
    cout << "p1.x: " << p1.x << endl;
    cout << "p1.y: " << p1.y << endl;
    cout << "distance between p1 and p2 is " << distance(p1, p2) << endl;
    
    return 0;
}
