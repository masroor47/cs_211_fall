#include <iostream>
using namespace std;

void add(int * a, int * b) {
    int valA = *a;
    int valB = *b;
    *a = valA + valB;
}

int main() {
    int x = 5;
    int y = 7;

    add(&x, &y);
    cout << "sum which is stored at x: " << x << endl;
}
