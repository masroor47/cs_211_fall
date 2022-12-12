#include <iostream>
using namespace std;


bool check(int q[], int n, int c) {
    int left_r;
    int left_c;
    int curr_r = q[c] / n;
    int curr_c = q[c] % n;

    for (int i = 0; i < c; i++) {
        left_r = q[i] / n;
        left_c = q[i] % n;

        if (abs(curr_c - left_c) == abs(curr_r - left_r)) { return false; }
    }
    return true;
}


void printBoard() {

}


int main() {

}