#include <iostream>

using namespace std;

bool leapyear(int y) {

    if (y % 100 == 0) { // century
        if (y % 400 == 0) {
            return true;
        }
    } else { // non-century
        if (y % 4 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int test1 = 4;
    int test2 = 100;
    int test3 = 400;
    int test4 = 44;

    cout  << test1 << ": " << leapyear(test1) << endl;
    cout  << test2 << ": " << leapyear(test2) << endl;
    cout  << test3 << ": " << leapyear(test3) << endl;
    cout  << test4 << ": " << leapyear(test4) << endl;




}