#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void updateString(string& s, int d) {
    s.at(d) = toupper(s.at(d));
}

void updateVector(vector<int>& v, int n) {
    for (auto& e : v)
        e = e * n;
}

void updateArray(int a[], int n, int size) {
    for (int i = 0; i < size; i++)
        a[i] = a[i] + n;
    cout << endl;
}

/*int main() {
    string s = "Hello";
    vector<int> v = {1, 2, 3, 4, 5};
    int a[] = {1, 2, 3, 4, 5};
    
    int size = sizeof(a) / sizeof(int);
    updateArray(a, 10, size);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    
    
    
    updateString(s, 2);
    cout << s << endl;
    
    updateVector(v, 10);
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    return 0;
}*/
