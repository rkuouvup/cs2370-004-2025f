//
//  except.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 10/9/25.
//
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        //throw 20;
        throw out_of_range("Out of range in line xxxx");
    } catch(int ex) {
        cout << "Exception: " << ex << endl;
    } catch (out_of_range &ex) {
        cout << "Exception: " << ex.what() << endl;
    }
    return 0;
}
