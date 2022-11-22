#include <iostream>
#include <vector>
using namespace std;


int main() {
    string s = "Hello";
    cout << "Length of " << s << " is: " << s.length() << endl;

    vector<int> v1;
    for (int i = 1; i < 7; i++) {
        v1.push_back(i);
    }

    for (int i = 0; i < 6; i++) {
        cout << v1.back() << " ";
        v1.pop_back();
    }
    cout << endl;

    
}
