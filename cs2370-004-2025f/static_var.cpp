#include <iostream>
using namespace std;

void func1() {
    int count = 0;
    count++;
    cout << count << endl;
}

void func2() {
    static int count = 0;
    count++;
    cout << count << endl;
}

/*int main() {
    cout << "variable in func1" << endl;
    func1();
    func1();
    func1();
    func1();
    func1();
    cout << "variable in func2" << endl;
    func2();
    func2();
    func2();
    func2();
    func2();
    return 0;
}*/
