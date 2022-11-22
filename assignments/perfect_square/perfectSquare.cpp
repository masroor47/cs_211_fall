
#include <iostream>

using namespace std;

int main() {

    bool twoOdd = false;
    int square = 0;
    int i = 2;
    int digit = 0;
    int digit1 = 0;
    while (!twoOdd) {
        square = i * i;
        if (square / i != i) break;
        // cout << "square: " << square;
        digit = square % 10;
        digit1 = square % 100 / 10;
        // cout << ", digits: " << digit1 << ", " << digit << endl;
        
        if (digit % 2 != 0 && digit1 % 2 != 0) {
            // cout << "The first perfect square with two gits found!\n";
            // cout << "Digit: " << i*i << endl;
            twoOdd = true;
        }
        i += 1;
    }

    if (twoOdd) {
        cout << "First Perfect square with two last digits odd found!\n";
        cout << "Digit: " << square << endl;
    } else {
        cout << "No such digit found! :(\n";
    }



}