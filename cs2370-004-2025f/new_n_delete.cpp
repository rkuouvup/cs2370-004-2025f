//
//  new_n_delete.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/21/25.
//
#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x = 0, double y = 0) {this->x = x; this->y = y;}
    void Print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

/*int main() {
    int i = 10;
    int *ptr = &i;
    int *newPtr = new int;    // int* malloc(sizeof(int))
    Point p1(3, 4);
    Point *p2 = new Point(6, 8);
    
    p1.Print();
    (*p2).Print();
    p2->Print();
    
    
    cout << "&p2: " << &p2 << endl;
    cout << "p2: " << p2 << endl;
    
    
    
    
    
    
    
    cout << "&i: " << &i << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "&newPtr: " << &newPtr << endl;
    cout << "newPtr: " << newPtr << endl;
    cout << "*newPtr: " << *newPtr << endl;
    return 0;
}*/
