#include <iostream>

using namespace std;

static int memo[100][100] = {0};

int paths(int row, int col) {
    if (row == 0 || col == 0) return 1;

    return paths(row-1, col) + paths(row, col-1);
}

int paths_memo(int row, int col) {
    if (memo[row][col] != 0) {
        return memo[row][col];
    }

    if (row == col) {
        memo[row][col] = paths_memo(row-1, col);
        return memo[row][col];
    }

    if (row > col) {
        return paths_memo(col, row);
    }

    memo[row][col] = paths_memo(row-1, col) + paths_memo(row, col-1);
    return memo[row][col];
}

int solution[5][5] = {
    {1, 1, 1, 1, 1},
    {1, 2, 3, 4, 5},
    {1, 3, 6, 10, 15},
    {1, 4, 10, 20, 35},
    {1, 5, 15, 35, 70}
};

int main() {
    for (int i = 0; i < 100; i++) {
        memo[i][0] = 1;
        memo[0][i] = 1;
    }

    int row = 17, col = 16;
    cout << "Using memo paths for " << row << ", " << col << " is: " << paths_memo(row, col) << endl;
    cout << "Non-memo paths for " << row << ", " << col << " is: " << paths(row, col) << endl;
    
    cout << "memo after running\n";
    for (int i = 0; i < 18; i++) {
        for (int j = 0; j < 18; j++) {
            cout << memo[i][j] << " ";
        }
        cout << endl;
    }
}