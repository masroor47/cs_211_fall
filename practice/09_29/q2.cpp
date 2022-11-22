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

bool isArmstrong(int num) {
    int number = num;
    int result = 0;
    int n = 3;
    while (num != 0) {
        result += pow(num % 10, n);
        num /= 10;
    }
    return result == number;
}

int main() {
    cout << isArmstrong(153) << endl;
}