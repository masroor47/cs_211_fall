#include <iostream>
using namespace std;

int reverseInt(int n) {
    int len = 3;
    int digits[len];
    for (int i = 0; i < len; i++) {
        digits[i] = n % 10;
        n = n / 10;
    }
    int result;
    result = digits[0] * 100 + digits[1] * 10 + digits[2];
    return result;
}





int main() {
    int reversed = reverseInt(123);
    cout << reversed << endl;
}