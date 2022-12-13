#include <iostream>
#include <vector>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


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


void printBoard(int *q, int k, int n) {
    // printArray(q, n);
    vector<int> bishops_on_row;
    for (int row = 0; row < n; row++ ) {
        bishops_on_row.clear();
        // cout << "size of vector after clearing: " << bishops_on_row.size() << endl;
        for (int i = k-1; i >= 0; i--) { // iterate over bishops
            if (q[i] / n == row) { // if this bishop is on the current row
                // cout << "found bishop on row: " << row << ", col: " << q[i] % n << endl;
                bishops_on_row.push_back(q[i] % n);
            }
        }

        // now print all bishops that you remembered on this row
        for (int col = 0; col < n; col++) {

            if ((bishops_on_row.size() != 0) && (col == bishops_on_row.back())) {
                cout << "X";
                bishops_on_row.pop_back();
            } else {
                cout << "-";
            }
            cout << " ";
        }
        cout << endl;
    } 
    cout << "-----------------\n\n";
}


int main() {
    int n, k;

    cout << "what's the size of the board (n): ";
    cin >> n;

    cout << "how many bishops (<= n): ";
    cin >> k;
    while (k > n) { // validate k
        cout << "number of bishops has to be less than size of the board\n";
        cout << "how many bishops: ";
        cin >> k;
    }

    // initializing the bishops array to 0
    int *q = new int[k];
    for (int i = 0; i < k; i++) {
        q[i] = 0;
    }
    // printArray(q, k);

    int maxLocation = n * n - 1;
    int c = 0, count = 0;

    while (c >= 0) {
        // if placed all bishops
        if (c > k-1) { // correct placement of all bishops
            count++;
            // its unreasonable to print all correct solutions. too many
            printBoard(q, k, n);
            // if (count == 1 || count == 436 || count == 777) {
            //     printBoard(q, k, n);
            // }
            c--;
            q[c]++;
        }

        if (q[c] > maxLocation) { // need to backtrack
            q[c] = 0; // zero out current bishop
            c--; // advance previous bishop
            if (c != -1) {
                q[c]++;
            }

        } else if (check(q, n, c)) {
            // if current bishops are good, add a new bishop
            c++;
            // new bishop can't start at 0. must be one postition after previous bishop
            q[c] = q[c-1] + 1;

        } else { // if did not pass the check, then try next location
            q[c]++;
        }
        // cout << "c is: " << xc << endl;
    }

    cout << "Thanks for using our program\n";
    cout << "Total bishops placements: " << count << endl;
    

}