#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int* pt = &a;
    cout << sizeof(pt) << endl;
}
