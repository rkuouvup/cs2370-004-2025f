//
//  thread1.cpp
//  cs2370-004-2025f
//
//  Created by Rita Kuo on 11/20/25.
//

#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

/*mutex m;

void f1(char c) {
    for (int i = 0; i < 200; i++)
        cout << c;
}

void f2() {
    for (int i = 0; i < 200; i++)
        cout << "B";
}

void f(const string& s) {
    for (int i = 0; i < 10; i++) {
        //m.lock();
        lock_guard<mutex> lck(m);
        for (char c : s)
            cout << c;
        cout << endl;
        //m.unlock();
    }
}

int main() {
    thread t1(f, "It's a Dessert Topping");
    thread t2(f, "It's a Floor Wax");
    
    t1.join();
    t2.join();
    
    
    //thread worker1(f1, 'X');
    //thread worker2(f2);
    //worker1.join();
    //worker2.join();
    //f1();
    //f2();
    return 0;
}*/
