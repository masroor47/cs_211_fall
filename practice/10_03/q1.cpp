#include <iostream>
using namespace std;

bool OK(int queens[8], int c) {
    for (int i = 0; i < c; i++) {
        if (queens[i] == queens[c]) {
            return false;
        }
        if (c - i == abs(queens[c] - queens[i])) {
            return false;
        }
    }
    return true;
}


int main() {

}