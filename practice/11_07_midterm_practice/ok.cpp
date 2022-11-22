#include <iostream>

using namespace std;

bool ok(int q[8]) {
    for (int c = 7; c > 0; c--) {
        for (int i = 0; i < c; i++) {
            // horizontal test
            if (q[i] == q[c]) {
                return false;
            }
            // horizontal upper and lower tests
            if ((c - 1) == abs(q[c] - q[i])) {
                return false;
            }
        }
    }
}