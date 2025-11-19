//
//  generic1.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 11/18/25.
//

#include <iostream>
using namespace std;

int maximumInt(int v1, int v2, int v3) {
    int m = v1;
    if (v2 > m)
        m = v2;
    if (v3 > m)
        m = v3;
    return m;
}

template<typename T>
T maximum(T v1, T v2, T v3) {
    T m = v1;
    if (v2 > m)
        m = v2;
    if (v3 > m)
        m = v3;
    return m;
}




/*int main() {
    cout << "max in 6, 2, 4: " << maximum(6, 2, 4) << endl;
    cout << "max in hello, uvu, world: " << maximum("hello", "uvu", "world") << endl;
    return 0;
}*/
