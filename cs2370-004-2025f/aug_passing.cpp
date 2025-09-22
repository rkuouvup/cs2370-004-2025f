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

/*int main() {
    string s = "Hello";
    vector<int> v = {1, 2, 3, 4, 5};
    
    updateString(s, 2);
    cout << s << endl;
    
    updateVector(v, 10);
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    return 0;
}*/
