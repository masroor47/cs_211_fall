#include <iostream>
using namespace std;

int pow(int base, int power) {
    if (base == 0)  return 0;
    if (power == 0) return 1;
    if (power > 0) {
        int result = 1;
        for (int i = 0; i < power; i++) {
            result *= base;
        }
        return result;
    } else {
        return -1;
    }
}

int main() {
    cout << "2 to the 0th is " << pow(2, 0) << endl;
}