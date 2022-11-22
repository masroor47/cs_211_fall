#include <iostream>

using namespace std;


bool check(int queens[8], int c) {
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




int main() {

    int queens[8] = {0};

    int c = 0, count = 0;

    while (c >= 0) {
        if (c > 7) {
            count++;
            printBoard(queens);
            c--;
            queens[c]++;
        }
        
        if (queens[c] > 7) {
            queens[c] = 0;
            c--;
            if (c != -1) {
                queens[c]++;
            }
        } else if (check(queens, c)) {
            c++;
        } else {
            queens[c]++;
        }
        
        
    }
    cout << "Thanks for using our program\n";
    cout << "Total queens placements: " << count << endl;
}
