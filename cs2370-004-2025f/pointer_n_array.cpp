//
//  pointer_n_array.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/14/25.
//

#include <iostream>
using namespace std;

int main() {
    int v[] = {1, 2, 3, 4, 5};
    //int i = 10;
    int *p = v;
    //v = &i;
    //double d = 24;
    //double *dp = &d;
    
    cout << "v: " << v << endl;
    cout << "&v[0]:" << &v[0] << endl;
    cout << "p: " << p << endl;
    cout << "p+1: " << (p+1) << endl;
    cout << "&v[1]: " << &v[1] << endl;
    cout << "v[1]: " << v[1] << endl;
    cout << "*(p+1): " << *(p+1) << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << p << ": " << *p << endl;
        p++;
    }
    
    //cout << "dp: " << dp << endl;
    //cout << "dp+1: " << (dp+1) << endl;
    //p = &i;
    //cout << p << endl;
    
    
    return 0;
}

