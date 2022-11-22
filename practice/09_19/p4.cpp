#include <iostream>
using namespace std;

int sumDigitsSquared(int num) {
    int sum = 0;
    int remainder = 0;
    while (num > 0) {
        // cout << "num: " << num << endl;
        remainder = num % 10;
        // cout << remainder << endl;
        num /= 10;
        sum += remainder * remainder;
    }
    return sum;
}

int main() {
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;
    int sum = sumDigitsSquared(inputNumber);
    cout << "Sum of digits squared: " << sum << endl;
}