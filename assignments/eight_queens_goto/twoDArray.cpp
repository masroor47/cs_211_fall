#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void printBoard(int board[8][8]) {
    cout << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    
}

bool checkPosition(int board[8][8], int r, int c) {
//    check left
    for (int i = 0; c - i >= 0; i++) {
//        cout << "checking cell " << r << ", " << c-i << ": " << board[r][c-i] << endl;
        if (board[r][c-i] == 1) {
            return false;
        }
    }
    
//    check upper left diagonal
    for (int i = 0; (r - i) >= 0 && (c - i) >= 0; i++) {
        if (board[r-i][c-i] == 1) {
            return false;
        }
    }
    
//    check lower left diagonal
    for (int i = 0; (r + i) <= 8 && (c - i) >= 0; i++) {
        if (board[r+i][c-i] == 1) {
            return false;
        }
    }
//    cout << "can place at cell " << r << ", " << c << endl;
    return true;
}

int main(int argc, const char * argv[]) {

    auto start = high_resolution_clock::now();
    
    int board[8][8] = {0};
    
    int r, c = -1, successful = 0;
nc: c++;
//    only happens if it's a correct setup
    if (c == 8) {
        cout << "Working combination: \n";
        printBoard(board);
        successful++;
        goto backtrack;
    }
    r = -1;
nr: r++;
    if (r == 8) {
        goto backtrack;
    }
    
    if (!checkPosition(board, r, c)) {
        goto nr;
    }
    
    board[r][c] = 1;
    goto nc;
    
backtrack:
//    cout << "board up till backtrack:\n";
//    printBoard(board);
    c--;
    if (c == -1) {
        goto End;
    }
    r = 0;
    while (board[r][c] != 1) {
        r++;
    }
    board[r][c] = 0;
    goto nr;
    
End:
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "There were " << successful << " correct Queens combinations.\n";
    cout << "That's all for now, thanks!" << " it took " << duration.count() << " microseconds\n";
    
    
}