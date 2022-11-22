#include <iostream>

using namespace std;

bool allDigitsEven(int n) {
    int rem = n % 10;
    int n /= 10;
    while (rem != 0) {
        cout << rem;
        if (rem % 2 == 1) {

            return false;
        }
        rem = n % 10;
        n = n / 10;
    }
    return true;
}

int main() {
    cout << allDigitsEven(246) << endl;
}

