#include <iostream>
using namespace std;

void addFive(int * num) {
    *num = *num + 5;
}

int main() {
    int test1 = 10;
    cout << test1 << endl;
    addFive(&test1);
    cout << test1 << endl;
}