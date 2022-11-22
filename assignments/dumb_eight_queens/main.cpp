#include <iostream>

using namespace std;

void printBoard(int queens[8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (queens[j] == i) {
                cout << "X";
            } else {
                cout << "-";
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}

bool check(int queens[8]) {
    for (int c = 7; c >= 0; c--) {
        for (int i = 0; i < c; i++) {
            if (queens[i] == queens[c]) {
                return false;
            }
            if (c - i == abs(queens[c] - queens[i])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int q[8] = {0};
    int count = 0;
    bool stop = false;

    // This is a brute-force 'odometer' solution. 
    // Not using 8 nested for loops, but implementing 'carry over' functionality instead.
    // But still brute force and still odometer.

    while (!stop) {
        // if the rightmost queen is 8, we need to 'reset' the odometer
        if (q[7] > 7) {
            bool carryOver = false;
            // carry over one if necessary, and resetting each digit that reaches 8
            for (int i = 7; i >= 0; i--) {
                if (carryOver) {
                    // if the 0th queen reached 7 and we are carrying over, then stop
                    if (i == 0 && q[i] == 7) {
                        stop = true;
                        break;
                    }
                    q[i]++;
                    carryOver = false;
                }
                // if digit reached 8, reset to 0 and carry over a 1
                if (q[i] == 8) {
                    q[i] = 0;
                    carryOver = true;
                } 
            }
        }
        if (check(q)) {
            count++;
            cout << "One solution: \n";
            printBoard(q);
        }
        // incrementing the right-most queen
        q[7]++;
    }

    cout << "Thanks for using our program!\n";
    cout << "There were " << count << " solutions.\n";


}
