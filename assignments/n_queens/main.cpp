#include <iostream>

using namespace std;


bool check(int* queens, int c) {
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

void printBoard(int* queens, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
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

int countQueens(int n) {

    int c = 0, count = 0;
    int* queens = new int[n];

    while (c >= 0) {
        if (c > n - 1) {
            count++;
            // printBoard(queens);
            c--;
            queens[c]++;
        }
        
        if (queens[c] > n - 1) {
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
    delete [] queens;
    return count;
}


int main() {
    
    int max_queens;
    cout << "Up to how many queens (positive integer): ";
    cin >> max_queens;

    for (int i = 1; i <= max_queens; i++) {
        cout << "There are " << countQueens(i) << " solutions to the " << i << " queens problem.\n";
    }

    cout << "\nThanks for using our program!\n";
    cout << "To learn more on how we fight for attention-from-girls justice, check our website under the DEI section...\n";
}
