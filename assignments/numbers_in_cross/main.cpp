#include <iostream>
using namespace std;

bool ok(int cross[8], int idx, int adjecency[8][5]) {
    // first see if this number was alreadu used
    for (int i = 0; i < idx; i++) {
        if (cross[i] == cross[idx]) return false;
    }
    int neighborValue = 0;
    for (int i = 0; i < 5; i++) {
        if (adjecency[idx][i] == -1) break;
        
        neighborValue = cross[adjecency[idx][i]];
        if (abs(cross[idx] - neighborValue) == 1) {
            return false;
        }
    }

    return true;
}

void printCross(int cross[8]) {
    cout << "Printing an acceptable combination: \n";

    cout << "  " << cross[0] << " " << cross[1] << endl;
    for (int i = 2; i < 6; i++) cout << cross[i] << " ";
    cout << endl;
    cout << "  " << cross[6] << " " << cross[7] << "\n\n";
}

int main() {
    int adjecency[8][5] = {
        {-1, 0, 0, 0, 0},
        {0, -1, 0, 0, 0},
        {0, -1, 0, 0, 0},
        {0, 1, 2, -1, 0},
        {0, 1, 3, -1, 0},
        {1, 4, -1, 0, 0},
        {2, 3, 4, -1, 0},
        {3, 4, 5, 6, -1},
    };

    int cross[8] = {1};
    int idx = 0, count = 0;

    while (idx >= 0) {
        if (idx > 7) {
            count++;
            printCross(cross);
            idx--;
            cross[idx]++;
        }
        if (cross[idx] > 8) {
            cross[idx] = 1;
            idx--;
            // making sure you can still backtrack:
            if (idx != -1) {
                cross[idx]++;
            }

        } else if (ok(cross, idx, adjecency)) {
            idx++;
        } else {
            cross[idx]++;
        }
    }
    cout << "Thanks for using our amazing tool!\n";
    cout << "Total number of acceptable integer placements: " << count << endl;

}
