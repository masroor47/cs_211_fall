#include <iostream>
using namespace std;

bool check(int matches[3], int c, int mp[3][3], int wp[3][3]) {
    // check the newly added match at index c
    // compare men and women at previous indecies    
    // If there is a more desirable woman who prefers the guy more than her current guy
    // Or if the current woman's more desirable guy prefers her more than his current girl
    // Then not stable

    for (int i = 0; i < c; i++) {
    // C - index of newly matched man
    // matches[C] - index of newly matched woman

        // one person has multiple spouses
        if (i == c || matches[i] == matches[c]) {
            return false;
        }
        
        // cout << "man " << c << " likes woman " << <<
        // last guy and ith girl have a better match than last guy and his current wife
        if (mp[c][matches[i]] < mp[c][matches[c]] && wp[matches[i]][c] < wp[matches[i]][i] ) {
            return false;
        }

        // last woman and ith man have a better match than last woman and her current guy
        if ( wp[matches[c]][i] < wp[matches[c]][c] && mp[i][matches[c]] < mp[i][matches[i]]) {
            return false;
        }
    }


    return true;
}

void printMatches(int matches[3]) {
    cout << "Got a Stable Marriage!!:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Man " << i << " with Woman " << matches[i] << endl;
    }
    cout << "\n";
}

int main() {
    // mens' preferences
    int mp[3][3] = {
        {0, 2, 1},
        {0, 2, 1},
        {1, 2, 0},
    };
    
    // women's preferences 
    int wp[3][3] = {
        {2, 1, 0},
        {0, 1, 2},
        {2, 0, 1},
    };
    
    int matches[3] = {0, 0, 0};
    int c = 0;
    int count = 0;

    // classic backtracking like in 8 queens
    while (c >= 0) {

        if (c > 2) {
            count++;
            printMatches(matches);
            c--;
            // keep going
            matches[c]++;
        }

        if (matches[c] > 2) {
            matches[c] = 0;
            c--;
            if (c != -1) {
                matches[c]++;
            }
        } else if (check(matches, c, mp, wp)) {
            c++;
        } else {
            matches[c]++;
        }
    }

    cout << "Thanks for using our program\n";
    if (count > 1) {
        cout << "There are " << count << " stable marriages\n";
    } else {
        cout << "There is one stable marraige only!!\n";
    }
}
