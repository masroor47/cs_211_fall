// Written by Masroor Khonkhodzhaev
// Submitting on November 19, 2022

#include <iostream>
#include <vector>
using namespace std;

// Prints three towers and the rings on them
void printTowers(vector<int> *t, int n) {
    // array idx keeps track of indecies to print top down
    int idx[3] = {t[0].size() - 1, t[1].size() - 1, t[2].size() - 1};

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            if (idx[j] == i) {
                cout << t[j][i] << " ";
                idx[j]--;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Self evident
void printMove(int from, int to, int candidate) {
    cout << "Move ring " << candidate << " from tower " << from << " to tower " << to << endl;
}

int main() {
    // n = number of rings
    int n;
    cout << "Hello dear sir, how many rings do you want: ";
    cin >> n;
    while (n <= 0) {
        cout << "Enter values greater than 0, you silly sir! ";
        cin >> n;
    }

    vector<int> t[3];
    
    // Setting all rings on the left tower
    for (int i = n+1; i > 0; i--) {
        t[0].push_back(i);
    }
    // Initializing the bottom of all towers with n+1 base
    t[1].push_back(n+1);
    t[2].push_back(n+1);

    printTowers(t, n);

    int direction = 1; // 1 for clockwise, -1 for counter
    int from, candidate, to = 1; // IMPORTANT! Initially TO cannot be the left tower. 1 or 2 works

    if (n % 2 == 0) {
        direction = -1;
    }

    // Variables for indecies of the next position, and the one after next
    int next, next_next;

    int count = 0; // To count how many moves were made

    while (t[1].size() < n + 1) {

        // Setting the new FROM tower
        // Check two towers that are NOT the old TO tower
        // if direction is negative, it automatically checks in counterclockwise order
        next = (to + direction + 3) % 3;
        next_next = (to + 2 * direction + 3) % 3; 
        // + 3 is added here to turn negative numbers to positive for remainder operator to work

        if ( t[next].back() < t[(next_next) % 3].back() ) {
            from = next;
        } else {
            from = next_next;
        }

        candidate = t[from].back();

        // Setting the new TO tower
        // Selecting the closest tower and the one after that
        next = (from + direction + 3) % 3;
        next_next = (from + 2 * direction + 3) % 3;

        if ( t[next].back() > candidate ) { // First checking the closest one
            to = next;

        } else if (t[next_next].back() > candidate ) { // Then the next one
            to = next_next;

        } else { // in case cannot make a move
            cout << "Can't place candidate: " << candidate << " to  tower " << (from + 1) % 3 << " nor " << (from + 2) % 3 << endl;
            return 1;
        }

        // Moving the candidate from FROM tower to TO tower
        t[to].push_back(t[from].back());
        t[from].pop_back();
        count++;

        printMove(from, to, candidate);
        printTowers(t, n);
    }
    cout << "\nThanks for using our program! There were " << count << " total moves made. Good lord!\n";
    cout << "To learn more about how we fight with transistor privilege injustice follow this link...\n";
}
